
//
// This is example code from Chapter 6.7 "Trying the second version" of
// "Programming -- Principles and Practice Using C++" by Bjarne Stroustrup
// add ! factorial only for ints

#include "error.h"
#include <iostream>
using namespace std;

//------------------------------------------------------------------------------
class Token {
public:
  char kind;    // what kind of token
  double value; // for numbers: a value
  bool factorial = false;
  int oldvalue;
  Token(char ch) // make a Token from a char
      : kind(ch), value(0) {}
  Token(char ch, double val) // make a Token from a char and a double
      : kind(ch), value(val) {}
};

//------------------------------------------------------------------------------
/*
Token get_token()    // read a token from cin
{
    char ch;
    cin >> ch;    // note that >> skips whitespace (space, newline, tab, etc.)

    Switch (Ch) {
 //not yet   case ';':    // for "print"
 //not yet   case 'q':    // for "quit"
    case '(': case ')': case '{': case '}' : 'case '+': case '-': case '*': case
'/': return Token(ch);        // let each character represent itself case '.':
    case '0': case '1': case '2': case '3': case '4':
    case '5': case '6': case '7': case '8': case '9':
        {
            cin.putback(ch);         // put digit back into the input stream
            double val;
            cin >> val;              // read a floating-point number
            return Token('8',val);   // let '8' represent "a number"
        }
    default:
        error("Bad token");
    }
}
*/
//------------------------------------------------------------------------------

class Token_stream {
public:
  Token get();           // get a Token
  void putback(Token t); // put a Token back
  void preserveOldTokenFact(
      Token_stream t); // putt he old token here to be used later
private:
  bool full{false};     // is there a Token in the buffer?
  Token buffer = {'0'}; // where we store a 'putback' Token
};

void Token_stream::preserveOldTokenFact(Token_stream old_token) {}

void Token_stream::putback(Token t) {
  if (full)
    error("putback() into a full buffer");
  buffer = t;  // copy t to buffer
  full = true; // buffer is now full
}

Token Token_stream::get() {
  if (full) {
    full = false;
    return buffer;
  }
  char ch;
  cin >> ch;

  switch (ch) {
  case '=': // for "print"
  case 'x': // for "quit"
  case '(':
  case ')':
  case '}':
  case '{':
  case '+':
  case '-':
  case '*':
  case '!': // factorial
  case '/':
    return Token{ch}; // let each character represent itself
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
    cin.putback(ch);
    double val;
    cin >> val;
    return Token{'8', val};
  }
  default:
    error("Bad Token");
  }
}

//------------------------------------------------------------------------------

Token_stream ts; // provides get() and putback()

//------------------------------------------------------------------------------

double expression(); // read and evaluate a Expression

//------------------------------------------------------------------------------

double term(); // read and evaluate a Term

//------------------------------------------------------------------------------

double primary() // read and evaluate a Primary
{
  Token t = ts.get();
  switch (t.kind) {
  case '(': // handle '(' expression ')'
  {
    double d = expression();
    t = ts.get();
    if (t.kind != ')')
      error("')' expected");
    return d;
  }

  case '8':         // we use '8' to represent a number;
    return t.value; // return the number's value
                    // if prior token is '!' then need logic here to handle the
                    // math because its not being read in the case for '!'some
                    // way to make the cpu look for the code below in case '!'
                    // from here once the number t.value is returned.
                    //
  // New code added for {} logic
  case '{': {
    double d = expression();
    t = ts.get();
    if (t.kind != '}')
      error("'}' expected!");
    return d;
  }

  case '!': {
    t.factorial = true;
    double d = expression();
    // t = ts.get();
    // return d;
  }

  default:
    error("primary expected");
  }
}
//-----------------------------------------------------------------------------

int main() {
  try {
    cout << "Welcome to this calculator\n";
    double val = 0;

    while (cin) {
      Token t = ts.get();
      if (t.kind == 'x') {
        // cout << "Exiting\n";
        break;
      }
      // ‘q’ for “quit”
      if (t.kind == '=')
        // ‘;’ for “print now”
        cout << "=" << val << '\n';
      else
        ts.putback(t);
      val = expression();
    }

  } catch (exception &e) {
    cerr << e.what() << endl;
    return 1;
  } catch (...) {
    cerr << "exception \n";
    // keep_window_open ("~1");
    return 2;
  }
}

//------------------------------------------------------------------------------

double expression() {
  double left = term(); // read and evaluate a Term
  Token t = ts.get();   // get the next token
  while (true) {
    switch (t.kind) {
    case '+':
      left += term(); // evaluate Term and add
      t = ts.get();
      break;

    case '-':
      left -= term(); // evaluate Term and subtract
      t = ts.get();
      break;

    case '!': {
      int face;
      // if (t.value == '8')
      face = t.value;
      // throw error if non int i.e. double entered
      for (int i = t.value; i >= 1; --i)
        face = face * i; // getting 0 for the result math is wrong here.
      return face;
      ts.get();
      if (t.kind != '8')
        error("Expected value type");
    }

    case '8':         // we use '8' to represent a number
      return t.value; // return the number's value

    default:
      ts.putback(t);
      return left; // finally: no more + or -: return the answer
    }
  }
}

//------------------------------------------------------------------------------

double term() {
  double left = primary();
  Token t = ts.get(); // get the next token

  while (true) {
    switch (t.kind) {
    case '*':
      left *= primary();
      t = ts.get();
      break;

    case '/': {
      double d = primary();
      if (d == 0)
        error("divide by zero");
      left /= d;
      t = ts.get();
      break;
    }

    default:
      ts.putback(t);
      return left;
    }
  }
}
//------------------------------------------------------------------------------
