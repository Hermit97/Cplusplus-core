
/*
        calculator08buggy.cpp

        Helpful comments removed.

        We have inserted 3 bugs that the compiler will catch and 3 that it
   won't.
*/

#include "std_lib_facilities.h"
#include <cctype>
#include <cmath>
#include <math.h>

using namespace std;

// Token class (User defined type) has different kinds of data in it
class Token {
public:
  char kind;
  double value;
  string name;

  // 3 seperate constructors first one is (kind, name)
  Token(char ch) : kind{ch}, value{0} {}
  Token(char ch, double val) : kind{ch}, value{val} {}
  Token(char ch, string n) : kind{ch}, name{n} {}
};

// Models cin as a token stream
class Token_stream {
public:
  // Tokem stream constructor
  Token_stream() : full(0), buffer(0) {}
  Token get();
  // Removes a token fromt the stream
  void unget(Token t) {
    buffer = t;
    full = true;
  }
  void ignore(char c);

private:
  // Check if the buffer is full
  bool full;
  Token buffer;
};

// The let token
const char let = 'L';
// Quit token
const char quit = 'Q';
// Print token
const char print = ';';
// Number token
const char number = '8';
// Name token
const char name = 'a';
// Pow token
const char power = 'p';
// let keyword
const string declareKey = "let";
// Quit keyword
const string declareQuit = "quit";
// Sqrt token
const char sq = 's';
// Sqrt keyword
const string declareSqrt = "sqr";
// Pow keyword
const string powkey = "pow";

// Function gets input from cin then forms tokens
Token Token_stream::get() {
  // If their already is a token in the buffer then it resets it
  if (full) {
    full = false;
    return buffer;
  }

  char ch;
  cin.get(ch);          // Reads input and keeps it in the stream
  while (isspace(ch)) { // Checks for white space
    if (ch == '\n')
      return Token(print); // Checks for next line and prints
    cin.get(ch);           // Reads the result
  }
  // cin >> ch;
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
  case ',':
    return Token(ch); // Each character represents itself
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
    cin.unget(); // Put digit back into stream
    double val;
    cin >> val;                // read a floating-point number
    return Token(number, val); // represents a token as a (number, value)
  }
  default: // If the input is not a char or a number then its read as one of the
           // following below
    if (isalpha(ch)) { // checks if ch is a letter
      string s;
      // Intilizes s with s + ch
      s += ch;
      while (cin.get(ch) && (isalpha(ch) || isdigit(ch)))
        s += ch; // cin.get reads the entire line including the whitespaces
                 // while the loop is true
      cin.unget(); // Put the digit back into the stream
      if (s == declareKey)
        return Token{let}; // declaration keyword
      if (s == declareQuit)
        return Token{quit}; // quit keyword
      if (s == declareSqrt)
        return Token{sq};
      if (s == powkey)
        return Token{power};
      return Token(name, s);
    }
    error("Bad token"); // If its anything else then its a bad token
  }
}

// Ignores a token in the stram
void Token_stream::ignore(char c) {
  if (full && c == buffer.kind) {
    full = false; // if the kind of tokens == the kind of token in the buffer
                  // then empty the buffer and exit the ignore function
    return;
  }
  // Empty the buffer
  full = false;

  // Now search input if invalid token entered
  char ch;
  while (cin >> ch)
    if (ch == c)
      return;
}

// Defines the variable (name, value)
class Variable {
public:
  string name;
  double value;
  Variable(string n, double v) : name(n), value(v) {}
};
vector<Variable> var_table;

// Get the value from the vector of variables
double get_value(string s) {
  // Iterates through the vector checking is the name member matches the name
  // token entered.
  for (const Variable &v : var_table)
    if (v.name == s)
      return v.value;
  error("get: undefined variable ", s);
}

// If a valid token name is entered then its valued is assigned to it
void set_value(string s, double d) {
  // Iterates through the vector checking is the name member matches the name
  // token entered. If yes then it gets the value
  for (Variable &v : var_table)
    if (v.name == s) {
      v.value = d;
      return;
    }
  error("set: undefined name ", s);
}

// Checks if the variable is already declared
bool is_declared(string s) {
  for (Variable &v : var_table)
    if (v.name == s)
      return true;
  return false;
}

// predefined name k = 1000
void predefined(string name, int value) {
  if (is_declared(name))
    error("Declared twice");
  var_table.push_back(Variable(name, value));
}

void set_predefined() {
  predefined("k", 1000);
  // predefined(name, sqrt(value))
}

// Token object created with Token_stream type
Token_stream ts;

double expression();

// ex pow(2, 2) is 2 to the 2nd power
double pow_num(double n1, double n2) {
  if (n2 == 0) {
    if (n1 == 0)
      return 0;
    return 1;
  }

  double sum = n1;
  for (int i = 2; i <= n2; ++i) {
    sum *= n1;
  }
  return sum;
}

// Takes care of parenthesis and uary +/- and calls expression
double primary() {
  Token t = ts.get();
  switch (t.kind) {
  case '(': {
    double d = expression();
    t = ts.get();
    if (t.kind != ')')
      error("')' expected");
  }
  case '-':
    return -primary();
  case number:
    return t.value;
  case name:
    return get_value(t.name);
  // Case for sqr
  case sq: {
    // get the token
    t = ts.get();
    // check if the kind is (
    if (t.kind != '(')
      error("Expected (");
    // call expression and assign it to d
    double d = expression();
    // if d is less than 0 then error because you cant do sqrt < 0
    if (d < 0)
      error("Less than 0 error for sqrt");
    // get the next token
    t = ts.get();
    // if its not ) then errror
    if (t.kind != ')')
      error("Expected )");
    // return the operation sqrt from standard library passing d which holds
    // expressoin wihch does all the calculations
    return sqrt(d);
  }
  // Case for pow
  case power: {
    // get the next token should be pow(
    t = ts.get();
    if (t.kind != '(')
      error("Expecting (");
    double d = expression();
    t = ts.get();
    if (t.kind != ',')
      error("Expecting ,");
    t = ts.get();
    if (t.kind != number)
    error("Second arguemnt of pow is not an number");
    int n = int(t.value);
    if (n != t.value)
    error("Second argument is not an valid number");
    t = ts.get();
    if (t.kind != ')')
      error("Expecting )");

    return pow_num(d, n);
  }
  default:
    error("primary expected");
  }
}

// Takes care of multiplication/division
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
        error("divide by zero"); // error if number divided by 0
      left /= d;
      break;
    }
    case '%':
    {
      int l1 = int(left);
      if(l1 != left) error("Value is not an integer");

      double d = primary();
      int l2 = int(d);
      if(l2 != d) error("Value is not an ingeger");

      left = l1 % l2;
      break;
    }
    default:
      ts.unget(t); // Empties the buffer
      return left;
    }
  }
}

// calls expression and takes care of addition/substraction
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

// Makes sure after let is a name followed by a = followed by an expression
double declaration() {
  Token t = ts.get();
  if (t.kind != name)
    error("name expected in declaration");
  string name = t.name;
  if (is_declared(name))
    error(name, " declared twice");
  Token t2 = ts.get();
  // If second token kind is not equal to = then error
  if (t2.kind != '=')
    error("= missing in declaration of ", name);
  // Call expression
  double d = expression();
  // Push Variable consturctor name and d into the vector
  var_table.push_back(Variable(name, d));
  // return d which is the expression
  return d;
}

// Takes care of declaration and expression if their is no declaration
double statement() {
  Token t = ts.get();
  switch (t.kind) {
  case let:
    return declaration();
  default:
    ts.unget(t);
    return expression();
  }
}

// Cleans up after an error
void clean_up_mess() { ts.ignore(print); }

const string prompt = "> ";
const string result = "= ";

// prints the result
void calculate() {
  while (true)
    try {
      cout << prompt;
      Token t = ts.get();
      while (t.kind == print)
        t = ts.get();
      if (t.kind == quit)
        return;
      ts.unget(t);
      cout << result << statement() << endl;
    } catch (runtime_error &e) {
      cerr << e.what() << endl;
      clean_up_mess();
    }
}

int main() try {
  set_predefined();
  calculate();
  return 0;
} catch (exception &e) {
  cerr << "exception: " << e.what() << endl;
  char c;
  while (cin >> c && c != ';')
    ;
  return 1;
} catch (...) {
  cerr << "exception\n";
  char c;
  while (cin >> c && c != ';')
    ;
  return 2;
}
