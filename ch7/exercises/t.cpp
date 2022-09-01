/*
        calculator08buggy.cpp

1. Allow underscores in the calculator’s variable names. Done.

2. Provide an assignment operator, = , so that you can change the value of a
variable after you introduce it using let . Discuss why that can be useful
and how it can be a source of problems.

3.Provide named constants that you really can’t change the value of. Hint:
You have to add a member to Variable that distinguishes between con-
stants and variables and check for it in set_value() . If you want to let
the user define constants (rather than just having pi and e defined as
constants), you’ll have to add a notation to let the user express that, for
example, const pi = 3.14; .

4. The get_value() , set_value() , is_declared() , and define_name() functions
all operate on the variable var_table . Define a class called Symbol_table
with a member var_table of type vector<Variable> and member functions
get() , set() , is_declared() , and declare() . Rewrite the calculator to use a
variable of type Symbol_table .

5. Modify Token_stream::get() to return Token(print) when it sees a new-
line. This implies looking for whitespace characters and treating newline
( '\n' ) specially. You might find the standard library function isspace(ch) ,
which returns true if ch is a whitespace character, useful.

6. Modify the calculator to operate on int s (only); give errors for overflow
and underflow. Hint: Use narrow_cast (§7.5).
*/

#include "std_lib_facilities.h"
#include <cctype>
#include <cmath>
#include <math.h>
#include <pthread.h>

using namespace std;

// Token class (User defined type) has different kinds of data in it
class Token {
public:
  char kind;
  int value;
string name;

  // 3 seperate constructors first one is (kind, name)
  Token(char ch) : kind{ch}, value{0} {}
  Token(char ch, int val) : kind{ch}, value{val} {}
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

void help(){
  cout << "Enter integers to calculate.\n";
  cout << "Enter ; to print the output.\n";
}

// The let token
const char let = '#';
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
//const string declareKey = "let";
// Quit keyword
const string declareQuit = "exit";
// Sqrt token
const char sq = 's';
// Sqrt keyword
const string declareSqrt = "sqr";
// Pow keyword
const string powkey = "pow";
// Const token
const char tokenConstant = 'C';
// Constant keyword
const string constKeyWord = "const";
const char helpToken = 'h';


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
  case '#':
  case '_':
  case 'h':
  case 'H':
    return Token(ch); // Each character represents itself
  //case '.':
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
    int val;
    cin >> val;                // read a floating-point number
    return Token(number, val); // represents a token as a (number, value)
  }
  default: // If the input is not a char or a number then its read as one of the
           // following below
    if (isalpha(ch)) { // checks if ch is a letter
      string s;
      // Intilizes s with s + ch
      s += ch;
      while (cin.get(ch) && (isalpha(ch) || isdigit(ch)) || ch == '_')
        s += ch; // cin.get reads the entire line including the whitespaces
                 // while the loop is true
      cin.unget(); // Put the digit back into the stream
      //if (s == declareKey)
        //return Token{let}; // declaration keyword
      if (s == declareQuit)
        return Token{quit}; // quit keyword
      if (s == declareSqrt)
        return Token{sq};
      if (s == powkey)
        return Token{power};
      if(s == constKeyWord)
        return Token{tokenConstant};
      return Token(name, s);
    }
    error("Bad token"); // If its anything else then its a bad token
  }
}

// Ignores a token in the stram
void Token_stream::ignore(char c) {
  if (full && c == buffer.kind) {
    full = false; // If the kind of tokens == the kind of token in the buffer
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
  int value;
  bool isConstant;
  Variable(string n, int v) : name(n), value(v) {}
};

//num 4
class Symbol_table{
    vector<Variable> var_table;
  public:
    int get_value(string s);
    int set_value(string s, int d);
    bool is_declared(string name);
    void predefined(string name, int value);
};

Symbol_table sym;

// Get the value from the vector of variables
int Symbol_table::get_value(string s) {
  // Iterates through the vector checking is the name member matches the name
  // token entered.
  for (const Variable &v : var_table){
    if (v.name == s)
      return v.value;
  }
  error("get: undefined variable ", s);
}

// If a valid token name is entered then its valued is assigned to it
int Symbol_table::set_value(string s, int d) {
  // Iterates through the vector checking is the name member matches the name
  // token entered. If yes then it gets the value
  for (Variable &v : var_table){
    if (v.name == s) {
      if(v.isConstant){
        v.value = d;
        return d;
      }else
        error("Cant reassign value to a constant");
    }
    error("set: undefined name ", s);
  }
}

// Checks if the variable is already declared
bool Symbol_table::is_declared(string s) {
  for (Variable &v : var_table)
    if (v.name == s)
      return true;
  return false;
}

// predefined name k = 1000
void Symbol_table::predefined(string name, int value) {
  if (is_declared(name))
    error("Declared twice");
  var_table.push_back(Variable(name, value));
}

// Token object created with Token_stream type
Token_stream ts;

int expression();

  // ex pow(2, 2) is 2 to the 2nd power
int pow_num(int n1, int n2) {
  if (n2 == 0) {
    if (n1 == 0)
      return 0;
    return 1;
  }
  //int sum = n1;
  int sum = narrow_cast<int>(n1);
  for (int i = 2; i <= n2; ++i) {
    sum *= n1;
  }
  return sum;
}

// Takes care of parenthesis and uary +/- and calls expression
int primary() {
  Token t = ts.get();
  switch (t.kind) {
  case '(': {
    //int d = expression();
    int d = narrow_cast<int>(expression());
    t = ts.get();
    if (t.kind != ')')
      error("')' expected");
  }
  case '-':
    return -primary();
  case number:
    return t.value;
  case name:
  {
    Token t2 = ts.get();
    if(t2.kind == '='){
      //int d = expression();
      int d = narrow_cast<int>(expression());
      sym.set_value(t.name, d);
      return d;
    }else{
      ts.unget(t2);
      return sym.get_value(t.name);
    }
  }
  // Case for sqr
  case sq: {
    t = ts.get();
    if (t.kind != '(')
      error("Expected (");
    // call expression and assign it to d
   //int d = expression();
    int d = narrow_cast<int>(expression());
    // if d is less than 0 then error because you cant do sqrt < 0
    if (d < 0)
      error("Less than 0 error for sqrt");
    t = ts.get();
    if (t.kind != ')')
      error("Expected )");
    return sqrt(d);
  }
  case power: {
    // get the next token should be pow(
    t = ts.get();
    if (t.kind != '(')
      error("Expecting (");
    int d = expression();
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
int term() {
  int left = primary();
  while (true) {
    Token t = ts.get();
    switch (t.kind) {
    case '*':
      left *= primary();
      break;
    case '/': {
      int d = primary();
      if (d == 0)
        error("divide by zero"); // error if number divided by 0
      left /= d;
      break;
    }
    case '%':
    {
      int l1 = int(left);
      if(l1 != left) error("Value is not an integer");

      int d = primary();
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
int expression() {
  int left = term();
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
int declaration() {
  Token t = ts.get();
  if (t.kind != name) error("name expected in declaration");
  string name = t.name;

  Token t2 = ts.get();
  if(t2.kind != '=') error("= missing");

  int d = expression();
  sym.predefined(name, d);
  return d;
}


// Takes care of declaration and expression if their is no declaration
int statement() {
  Token t = ts.get();
  switch (t.kind) {
  case let:
    return declaration();
  case tokenConstant:
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
      if(t.kind == 'h' || t.kind == 'H'){
        help();
        t = ts.get();
        continue;
      }
      ts.unget(t);
      cout << result << statement() << endl;
    } catch (runtime_error &e) {
      cerr << e.what() << endl;
      clean_up_mess();
    }
}

int main() try {
  //set_predefined();
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
