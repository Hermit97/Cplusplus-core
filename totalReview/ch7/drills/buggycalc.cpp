#include "error.h"
#include <cmath>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <vector>

struct Token {
  char kind;
  double value;
  std::string name;
  bool constant_decl;

  // Token constructors
  // Token(char ch) : kind(ch), value(0) {} //(name, kind)
  Token(char ch) : kind(ch) {}                         //(kind, value)
  Token(char ch, double val) : kind(ch), value(val) {} //(kind, value)
  Token(char ch, std::string n) : kind(ch), name(n) {} // kind, name);
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

  /*bool empty(Token t){
    buffer = t;
    full = false;

    return true;
  }*/

  bool empty() {
    bool isEmpty = true;
    return isEmpty;
  }
  // no declare key #

  void ignore(char);
  /*void putback(Token t){
          buffer.p
          }
  */
};

const char let = 'L';
const char quit = 'Q';
const char print = ';';
const char number = '8';
const char name = 'a';
const std::string declkey = "#";
const char deckl = '#';
const std::string constant_id = "const";
const char constant_key = 'c';
const int k = 1000;
const std::string squared = "sq";
const char sq = 's';
const std::string dec_power = "pow";
const char pw = 'p';
const char reassign = 'e';
const std::string reassign_operator = "=";

Token Token_stream::get() { // Get token from stream
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
    std::cin.unget(); // Put back character in stream
    double val;
    std::cin >> val;
    return Token(number, val);
  }
  default:
    if (isalpha(ch) || ch == '#') {
      std::cin.putback(ch); // Put ch back if its not a character
      std::string s;
      std::cin >> s; // Reads the ch input again since its int he buffer because
                     // of cin.putback(ch)
      if (s == declkey)
        return Token(let); // returns the token let
      if (s == squared)
        return Token(sq);
      if (s == "exit")
        return Token(quit);
      if (s == dec_power)
        return Token(pw);
      if (s == constant_id)
        return Token(constant_key);
      return Token(name, s);
      // If its not let or name then it takes the name only
    }
    error("Bad token");
  }
}

const std::string prompt = "> ";
void Token_stream::ignore(char c) {
  if (full &&
      c == buffer.kind) { // if buffer is full and c is equal to the buffer
                          // token kind then buffer is not full and return
    full = false;
    return;
  }
  full = false;

  char ch = 0;
  // std::cout << prompt;

  // while (std::cin >> ch)  //problem is here why it wont print error secon2d
  // time if (ch == c) return;
}

struct Variable {
  std::string name;
  double value;
  bool constant_val;
  // Variable(std::string n, double v) : name(n), value(v) {}
  Variable(bool c, std::string n, double v)
      : constant_val(c), name(n), value(v) {}
};

class Symbol_table {
public:
  std::vector<Variable> var_table;
  double get();
  void set();
  double is_declared();
};
Symbol_table st;

// std::vector<Variable> names;
// rewrite get_value as get

double get_value(std::string s) {
  // Symbol_table st;
  for (int i = 0; i < st.var_table.size(); ++i)
    if (st.var_table[i].name == s)
      return st.var_table[i].value;
  // error("get: undefined name");
  error("get: undefined name ", s); // add second argument to error later
}

/*double get_value(std::string s) {
  for (int i = 0; i < names.size(); ++i)
    if (names[i].name == s)
      return names[i].value;
  // error("get: undefined name");
  error("get: undefined name ", s); // add second argument to error later
  }*/

void set_value(std::string s, double d) {
  // Symbol_table st;
  for (int i = 0; i <= st.var_table.size(); ++i)
    if (st.var_table[i].name == s) {
      if (s == constant_id)
        st.var_table[i].value = d;
      return;
    }
  error("set: undefined name ", s);
}

/*/void set_value(std::string s, double d) {
    Symbol_table st;
  for (int i = 0; i <= names.size(); ++i)
    if (names[i].name == s) {
      if (s == constant_id)
        names[i].value = d;
      return;
    }
  error("set: undefined name ", s);
  }*/

bool is_declared(std::string s) { // object is declared
  // Symbol_table st;
  for (int i = 0; i < st.var_table.size(); ++i)
    if (st.var_table[i].name == s)
      return true;
  return false;
}

Token_stream ts;

double expression();
double power(); // needs arguments

double power(double value, int pow) {
  int sum = 1;
  for (int i = 0; i < pow; ++i)
    sum = sum * value;
  return sum;
}

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
  case sq: {
    double d = expression();
    if (d < 0)
      error("invalid negative input");
    return std::sqrt(d);
  }
  case pw: {
    int power;
    std::cin >> power;
    double d = expression();
    return pow(power, d);
  }
  default:
    error("primary expected");
  }
}

double term() {
  double left = primary();
  while (true) {
    Token t = ts.get();
    switch (t.kind) {
    case 'r':
      left = std::sqrt(left);
      break;
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

// function for name push back for when type is '='
double statement();
double reassign_obj() {
  Token t = ts.get();
  if (t.kind != name)
    error("Name expected for reassignment");

  std::string var_name = t.name;
  std::string errorstuff = "Vaiable " + var_name + " ' has not been declared.";
  try {
    // if (t.constant_decl == true)
    // throw std::runtime_error("Cannot reassign const value");
    if (!is_declared(var_name)) {
      // error("Vaiable " + var_name + " ' has not been declared.");
      throw std::runtime_error(errorstuff);
    }

  } catch (std::runtime_error &e) {
    std::cerr << "Vaiable " << var_name << " ' has not been declared.";
    Token t2 = ts.get();
  }

  return statement();

  Token t2 = ts.get();
  if (t2.kind != '=')
    error("= expected for reassignment");

  double d = expression();
  set_value(var_name, d);
  return d;
}

double declration(Token& t) {
    //Token t = ts.get();
    //t = ts.get();
  if(t.constant_decl == true){
      std::cout << "ENTERED CONST";
  }
  //if (t.kind != 'a')
  //error("name expected in declaration");
  std::string name = t.name;
  if (is_declared(name) == true)
    error(name, " declared twice");
  Token t_name = ts.get();

  //problem is here it wont check if its declatred for someone reason prob because of token t is looking at the next token instead of the name.
  /*if (is_declared(name) == true && t.constant_decl == true)
    error("Cannot reassign a constant object");*/
  if (is_declared(name) == true)
    error(name, " declared twice");
  if (is_declared(name) == true && t.constant_decl == true)
    error("Cannot reassign a constant object");
  Token t2 = ts.get();
  if (t2.kind != '=')
    error("= missing in declaration of ", name);
  double d = expression();
  if(t.constant_decl == true){
      Variable var(var.constant_val = true, name, d);
      st.var_table.push_back(var);
  }
  Variable var(var.constant_val = false, name, d);
  st.var_table.push_back(var);
  return d;
}

double statement() {
  Token t = ts.get(); // get token
  bool constant_decl;
  switch (t.kind) {
  case let: // if its let then return dec
    return declration(t);
  case constant_key: {
    t.constant_decl = true; // this is true then go to declaration.
    return declration(t);
  }
  case name: {
      if (t.constant_decl == true){
	  std::cout << "Goign into declaration/n";
      }
      return declration(t);
    Token t2 = ts.get();
    if (t2.kind == '=') {
      /*if (t.constant_decl == true) {
      error("cannot reassign const value");
      } else {*/
      ts.unget(t);
      // t.constant_decl = false;
      return reassign_obj();
      //}

      ts.unget(t2); // put '=' back into buffer stream
      return reassign_obj();
    }
    return expression();
  }
  default:
    ts.unget(t);         // otherwise put the token back into the buffer
    return expression(); // return to expression
  }
}

void clean_up_mess() { ts.ignore(print); }

const std::string result = "= ";
void calculate() {
  while (true)
    try {
      Token t = ts.get();
      std::cout << prompt;
      while (t.kind == print)
        t = ts.get();
      if (t.kind == quit)
        return;
      ts.unget(t);
      std::cout << result << statement()
                << std::endl; // no prompt after this if error
    } catch (std::runtime_error &e) {
      std::cerr << e.what() << std::endl;
      clean_up_mess();
    }
}

int main() {
  try {
    calculate();
    return 0;
  } catch (std::exception &e) {
    std::cerr << "exception: " << e.what() << std::endl;
    char c;
    while (std::cin >> c && c != ';')
      ;
    return 1;
  } catch (...) {
    std::cerr << "exception\n";
    char c;
    while (std::cin >> c && c != ';')
      ;
    return 2;
  }
}
