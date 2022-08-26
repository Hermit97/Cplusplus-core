#include "std_lib_facilities.h"
#include <cctype>
#include <cmath>
#include <math.h>
#include <pthread.h>

class Variable {
    public:
        string name;
        double value;
        // exercise 03
        bool writable;
};

//------------------------------------------------------------------------------

class Symbol_table {
    vector<Variable> var_table;
    bool is_declared(string var);
    public:
        double get_value(string s);
        double set_value(string s, double d);
        double define_name(string var, double val, bool write);
};

//------------------------------------------------------------------------------

double Symbol_table::get_value(string s)
{
    for (const Variable& v : var_table)
        if (v.name == s) return v.value;
    error("get: undefined Variable ", s);
}

double Symbol_table::set_value(string s, double d)
{
    for (Variable& v : var_table)
        if (v.name == s) {
            if (v.writable) {
                v.value = d;
                return d;
            } else
                error("Cannot overwrite constant ", s);
        }
    error("set: undefined variable ", s);
}

bool Symbol_table::is_declared(string var)
{
    for (const Variable& v : var_table)
        if (v.name == var) return true;
    return false;
}

double Symbol_table::define_name(string var, double val, bool write)
{
    if (is_declared(var)) error(var, " declared twice");
    var_table.push_back(Variable{var, val, write});
    return val;
}

//------------------------------------------------------------------------------
/* GRAMMAR
 * =======
 * Calculation:
 *      Statement
 *      Help
 *      Print
 *      Quit
 *      Calculation Statement
 *
 * Statement:
 *      Declaration
 *      Expression
 *
 * Declaration:
 *      "let" Name "=" Expression
 *
 * Expression:
 *      Term
 *      Expression + Term
 *      Expression - Term
 *
 * Term:
 *      Secondary
 *      Term * Secondary
 *      Term / Secondary
 *      Term % Secondary
 *
 * Secondary:
 *      Primary
 *      Number !
 *
 * Primary:
 *      Number
 *      ( Expression )
 *      - Primary
 *      + Primary
 *      Variable value
 *
 * Number:
 *      floating-point-literal
 *
 * Input comes from cin through the Token_stream called ts
 */
//------------------------------------------------------------------------------

class Token {
public:
    char kind;        // what kind of token
    double value;     // for numbers: a value
    string name;
    Token(char ch) :kind{ch} { }
    Token(char ch, double val) :kind{ch}, value{val} { }
    Token(char ch, string n) :kind{ch}, name{n} { }
};

//------------------------------------------------------------------------------

class Token_stream {
    public:
        Token get();            // get a Token
        void putback(Token t);  // put a Token back
        void ignore(char c);    // discard characters up to and including 'c'
    private:
        bool full {false};      // is there a Token in the buffer?
        Token buffer = {'0'};           // where we store a 'putback' Token
};

//------------------------------------------------------------------------------

const char number = '8';
const char quit = 'q';
const char print = ';';
const char name = 'a';
const char let = 'L';
const char help = 'h';

const string declkey = "let";
const string quitkey = "quit";
const string helpkey = "help";
const string prompt = "> ";
const string result = "= ";

//------------------------------------------------------------------------------

void Token_stream::putback(Token t)
{
    if (full) error("putback() into a full buffer");
    buffer = t;         // copy t to buffer
    full = true;        // buffer is now full
}

void Token_stream::ignore(char c)
    // c represents the kind of Token
{
    // first check buffer
    if (full && c == buffer.kind) {
        full = false;
        return;
    }
    full = false;

    char ch = 0;
    while (cin >> ch)
        if (ch == c) return;
}

Token Token_stream::get()
{
    if (full) {
        full = false;
        return buffer;
    }

    while(true) {
        char ch;
        cin.get(ch);

        switch (ch) {
            case print:
            case '=':
            case '(':
            case ')':
            case '+':
            case '-':
            case '*':
            case '/':
            case '%':
                return Token{ch};   // let each character represent itself
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
            case '9':
                {
                    cin.putback(ch);
                    double val;
                    cin >> val;
                    return Token{number, val};
                }
            default:
                if (isalpha(ch)) {
                    string s;
                    s += ch;
                    // exercise 01
                    while (cin.get(ch) && (isalpha(ch) || isdigit(ch) ||
                                (ch == '_')))
                        s += ch;
                    cin.putback(ch);
                    if (s == declkey) return Token{let};
                    if (s == helpkey) return Token{help};
                    if (s == quitkey) return Token{quit};
                    return Token{name, s};
                }
                // exercise 05
                if (isspace(ch)) {
                    if (ch == '\n') return Token{print};
                    break;
                }
                error("Bad Token");
        }
    }
}

//------------------------------------------------------------------------------

Token_stream ts;      // provides get() and putback()
Symbol_table sym;

//------------------------------------------------------------------------------

double expression();  // read and evaluate a Expression

//------------------------------------------------------------------------------

double term();        // read and evaluate a Term

//------------------------------------------------------------------------------

double primary()     // read and evaluate a Primary
{
    Token t = ts.get();
    switch (t.kind) {
    case '(':    // handle '(' expression ')'
        {
            double d = expression();
            t = ts.get();
            if (t.kind != ')') error("')' expected");
            return d;
        }
    case number:            // we use '8' to represent a number
        return t.value;  // return the number's value
    case name:
        {
            // exercise 02
            Token t2 = ts.get();
            if (t2.kind == '=') {
                return sym.set_value(t.name, expression());
            } else {
                ts.putback(t2);
                return sym.get_value(t.name);
            }
        }
    case '-':
        return -primary();
    case '+':
        return primary();
    default:
        error("primary expected");
    }
}
//------------------------------------------------------------------------------

void clean_up_mess()
{
    ts.ignore(print);
}

//------------------------------------------------------------------------------

double declaration()
{
    Token t = ts.get();
    if (t.kind != name) error("name expected in declaration");
    string var_name = t.name;

    Token t2 = ts.get();
    if (t2.kind != '=') error("= missing in declaration of ", var_name);

    double d = expression();
    sym.define_name(var_name, d, true);
    return d;
}

//------------------------------------------------------------------------------

double statement()
{
    Token t = ts.get();
    switch (t.kind) {
        case let:
            return declaration();
        default:
            ts.putback(t);
            return expression();
    }
}

//------------------------------------------------------------------------------

void print_manual()
{
    cout << "Welcome to the Simple Calculator Help Service\n"
         << "This calculator can add, subtract, multiply and divide\n"
         << "The operators are +, -, *, and /. Append ';' to the end of\n"
         << "an expression to calculate the results:\n"
         << "> 1 + 2; will print out = 3\n";
}

//------------------------------------------------------------------------------

void calculate()
{
    while (cin)
    try {
        cout << prompt;
        Token t = ts.get();
        if (t.kind == help) {
            print_manual();
            t = ts.get();
            continue;
        }
        while (t.kind == print) t = ts.get();
        if (t.kind == quit) return;
        ts.putback(t);
        cout << result << statement() << '\n';
    }
    catch (exception& e) {
        cerr << e.what() << '\n';
        clean_up_mess();
    }
}

//------------------------------------------------------------------------------

int main()
try {
    sym.define_name("pi", 3.1415926535, false);
    sym.define_name("e", 2.7182818284, false);

    calculate();
    return 0;
}
catch (exception& e) {
    cerr << e.what() << '\n';
    return 1;
}
catch (...) {
    cerr << "exception \n";
    return 2;
}

//------------------------------------------------------------------------------

double expression()
{
    double left = term();      // read and evaluate a Term
    Token t = ts.get();        // get the next token
    while(true) {
        switch(t.kind) {
        case '+':
            left += term();    // evaluate Term and add
            t = ts.get();
            break;
        case '-':
            left -= term();    // evaluate Term and subtract
            t = ts.get();
            break;
        default:
            ts.putback(t);
            return left;       // finally: no more + or -: return the answer
        }
    }
}

//------------------------------------------------------------------------------

double term()
{
    double left = primary();
    Token t = ts.get();     // get the next token

    while(true) {
        switch (t.kind) {
        case '*':
            left *= primary();
            t = ts.get();
            break;
        case '/':
            {
                double d = primary();
                if (d == 0) error("divide by zero");
                left /= d;
                t = ts.get();
                break;
            }
        case '%':
            {
                double d = primary();
                if (d == 0) error("%: divide by zero");
                left = fmod(left,d);
                t = ts.get();
                break;
            }
        default:
            ts.putback(t);
            return left;
        }
    }
}
