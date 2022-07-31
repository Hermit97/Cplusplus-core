
/*
	calculator08buggy.cpp

	Helpful comments removed.

	We have inserted 3 bugs that the compiler will catch and 3 that it won't.
*/

#include "std_lib_facilities.h"

using namespace std;

//Token class (User defined type) has different kinds of data in it
class Token {
	public:
		char kind;
		double value;
		string name;

		//3 seperate constructors first one is (kind, name)
		Token(char ch, string n) :kind(ch), name(n) { }
		//(kind, optional value)
		Token(char ch) :kind(ch), value(0) { }
		//(kind, value)
		Token(char ch, double val) :kind(ch), value(val) { }
};

//Models cin as a token stream
class Token_stream {
	//bool full;
	//Token buffer;
public:
	//Tokem stream constructor
	Token_stream() :full(0), buffer(0) { }
	Token get();
	//Removes a token fromt the stream
	void unget(Token t) { buffer = t; full = true; }
	void ignore(char c);
private:
	//Check if the buffer is full
	bool full;
	Token buffer;
};

//The let token
const char let = 'L';
//Quit token
const char quit = 'Q';
//Print token
const char print = ';';
//Number token
const char number = '8';
//Name token
const char name = 'a';
//let keyword
const string declareKey = "let";
//Quit keyword
const string declareQuit = "quit";

//Function gets input from cin then forms tokens
Token Token_stream::get()
{
	//If their already is a token in the buffer then it resets it
	if (full) { full = false; return buffer; }
	char ch;
	cin >> ch;
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
		return Token(ch); //Each character represents itself
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
	{	cin.unget(); //Put digit back into stream
	double val;
	cin >> val; //read a floating-point number
	return Token(number, val); //represents a token as a (number, value)
	}
	default: //If the input is not a char or a number then its read as one of the following below
		if (isalpha(ch)) { //checks if ch is a letter
			string s;
			s += ch;
			while (cin.get(ch) && (isalpha(ch) || isdigit(ch))) s = ch; //cin.get reads the entire line including the whitespaces
			cin.unget(); //Put the digit back into the stream
			if (s == declareKey) return Token(let); //declaration keyword
			if (s == declareQuit) return Token(quit); //quit keyword
			return Token(name, s);
		}
		error("Bad token"); //If its anything else then its a bad token
	}
}

//Ignores a token in the stram
void Token_stream::ignore(char c)
{
	if (full && c == buffer.kind) {
		full = false; //if the kind of tokens == the kind of token in the buffer then empty the buffer and exit the ignore function
		return;
	}
	//Empty the buffer
	full = false;

	//Now search input if invalid token entered
	char ch;
	while (cin >> ch)
		if (ch == c) return;
}

struct Variable {
	string name;
	double value;
	Variable(string n, double v) :name(n), value(v) { }
};

vector<Variable> names;

double get_value(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return names[i].value;
	error("get: undefined name ", s);
}

void set_value(string s, double d)
{
	for (int i = 0; i <= names.size(); ++i)
		if (names[i].name == s) {
			names[i].value = d;
			return;
		}
	error("set: undefined name ", s);
}

bool is_declared(string s)
{
	for (int i = 0; i < names.size(); ++i)
		if (names[i].name == s) return true;
	return false;
}

Token_stream ts;

double expression();

double primary()
{
	Token t = ts.get();
	switch (t.kind) {
	case '(':
	{	double d = expression();
	t = ts.get();
	if (t.kind != ')') error("'(' expected");
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

double term()
{
	double left = primary();
	while (true) {
		Token t = ts.get();
		switch (t.kind) {
		case '*':
			left *= primary();
			break;
		case '/':
		{	double d = primary();
		if (d == 0) error("divide by zero");
		left /= d;
		break;
		}
		default:
			ts.unget(t);
			return left;
		}
	}
}

double expression()
{
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

double declaration()
{
	Token t = ts.get();
	if (t.kind != name) error("name expected in declaration");
	string name = t.name;
	if (is_declared(name)) error(name, " declared twice");
	Token t2 = ts.get();
	if (t2.kind != '=') error("= missing in declaration of ", name);
	double d = expression();
	names.push_back(Variable(name, d));
	return d;
}

double statement()
{
	Token t = ts.get();
	switch (t.kind) {
	case let:
		return declaration();
	default:
		ts.unget(t);
		return expression();
	}
}

void clean_up_mess()
{
	ts.ignore(print);
}

const string prompt = "> ";
const string result = "= ";

void calculate()
{
	while (true) try {
		cout << prompt;
		Token t = ts.get();
		while (t.kind == print) t = ts.get();
		if (t.kind == quit) return;
		ts.unget(t);
		cout << result << statement() << endl;
	}
	catch (runtime_error& e) {
		cerr << e.what() << endl;
		clean_up_mess();
	}
}

int main()

try {
	calculate();
	return 0;
}
catch (exception& e) {
	cerr << "exception: " << e.what() << endl;
	char c;
	while (cin >> c && c != ';');
	return 1;
}
catch (...) {
	cerr << "exception\n";
	char c;
	while (cin >> c && c != ';');
	return 2;
}
