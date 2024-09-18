#include "error.h"
#include <iostream>
#include <limits>
#include <stdexcept>
#include <vector>

struct Token {
  char kind;
  double value;
  std::string name;
  
  //Token constructors
 // Token(char ch) : kind(ch), value(0) {} //(name, kind)
  Token(char ch) : kind(ch) {} //(kind, value)
  Token(char ch, double val) : kind(ch), value(val) {}  //(kind, value)
  Token(char ch, std::string n) : kind(ch), name(n) {} //kind, name);
  
};

class Token_stream {
  bool full;
  Token buffer;

public:
  Token_stream() : full(0), buffer(0) {}

  Token get();
  void unget(Token t) {
    buffer = t;
    full = true;
  }

  void ignore(char);
};

const char let = 'L';
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char name = 'a';
const std::string declkey = "let";

Token Token_stream::get() { //Get token from stream
  if (full) {
    full = false;
    return buffer;
  }
  char ch;
  std::cin >> ch;
  switch (ch) {
  case '(':
  case ')':
  case '+':
  case '-':
  case '*':
  case '/':
  case '%':
  case ';':
  case '=':
    return Token(ch);
  case '.':
  case '0':
  case '1':
  case '2':
  case '3':
  case '4':
  case '5':
  case '6':
  case '7':
  case '8':
  case '9': {
    std::cin.unget(); //Put back character in stream
    double val;
    std::cin >> val;
    return Token(number, val);
  }
  default:
    if (isalpha(ch)) {
      std::cin.putback(ch);
      std::string s;
      std::cin >> s;
      if(s == declkey) return Token(let);
      if (s == "quit")
        return Token(quit);
      return Token(name, s);
    }
    error("Bad token");
  }
}

void Token_stream::ignore(char c) {
  if (full && c == buffer.kind) { //if buffer is full and char is equal to the buffer token kind then buffer is not full and return
    full = false;
    return;
  }
  full = false;

  char ch;
  while (std::cin >> ch) 
    if (ch == c)
      return;
}

struct Variable {
  std::string name;
  double value;
  Variable(std::string n, double v) : name(n), value(v) {}
};

std::vector<Variable> names;

double get_value(std::string s) {
  for (int i = 0; i < names.size(); ++i)
    if (names[i].name == s)
      return names[i].value;
  error("get: undefined name");
  //error("get: undefined name ", s); add second argument to error later
}

void set_value(std::string s, double d) {
  for (int i = 0; i <= names.size(); ++i)
    if (names[i].name == s) { //s exists in names then assign d as a value to it
      names[i].value = d;
      return;
    }
  error("get: undefined name");
  //error("set: undefined name ", s);
}

bool is_declared(std::string s) { //object is declared
  for (int i = 0; i < names.size(); ++i)
    if (names[i].name == s)
      return true;
  return false;
}

Token_stream ts;

double expression();

double primary() {
  Token t = ts.get();
  switch (t.kind) {
  case '(': {
    double d = expression();
    t = ts.get();
    if (t.kind != ')')
      error("'(' expected");
  }
  case '-':
    return -primary();
  case number:
    return t.value;
  case name:
    return get_value(t.name);
  default:
    error("primary expected");
  }
}

double term() {
  double left = primary();
  while (true) {
    Token t = ts.get();
    switch (t.kind) {
    case '*':
      left *= primary();
      break;
    case '/': {
      double d = primary();
      if (d == 0)
        error("divide by zero");
      left /= d;
      break;
    }
    default:
      ts.unget(t);
      return left;
    }
  }
}

double expression() {
  double left = term();
  while (true) {
    Token t = ts.get();
    switch (t.kind) {
    case '+':
      left += term();
      break;
    case '-':
      left -= term();
      break;
    default:
      ts.unget(t);
      return left;
    }
  }
}

double declration() {
  Token t = ts.get();
  if (t.kind != 'a')
    error("name expected in declaration");
  std::string name = t.name;
  if (is_declared(name))
    error("Declared twice");
    //error(name, " declared twice");
  Token t2 = ts.get();
  if (t2.kind != '=')
    error("= missing in declaration of ...");
    //error("= missing in declaration of ", name);
  double d = expression();
  names.push_back(Variable(name, d));
  return d;
}

double statement() {
  Token t = ts.get();
  switch (t.kind) {
  case let:
    return declration();
  default:
    ts.unget(t);
    return expression();
  }
}

void clean_up_mess() { ts.ignore(print); }

const std::string prompt = "> ";
const std::string result = "= ";

void calculate() {
  while (true)
    try {
      std::cout << prompt;
      Token t = ts.get();
      while (t.kind == print)
        t = ts.get();
      if (t.kind == quit)
        return;
      ts.unget(t);
      std::cout << result << statement() << std::endl;
    } catch (std::runtime_error & e) {
      std::cerr << e.what() << std::endl;
      clean_up_mess();
    }
}

int main(){
  try {
    calculate();
    return 0;
  } catch (std::exception &e) {
    std::cerr << "exception: " << e.what() << std::endl;
    char c;
    while (std::cin >> c && c != ';');
    return 1;
  } catch (...) {
    std::cerr << "exception\n";
    char c;
    while (std::cin >> c && c != ';')
      ;
    return 2;
  }
}
