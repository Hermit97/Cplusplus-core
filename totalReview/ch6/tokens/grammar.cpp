#include <fstream>
#include <iostream>
#include <string>
#include "error.h"

/*Write a program that checks if a sentence is correct according to the “En-
glish” grammar in §6.4.1. Assume that every sentence is terminated by
a full stop (.) surrounded by whitespace. For example, birds fly but the
fish swim . is a sentence, but birds fly but the fish swim (terminating dot
missing) and birds fly but the fish swim. (no space before dot) are not. For
each sentence entered, the program should simply respond “OK” or “not
OK.” Hint: Don’t bother with tokens; just read into a string using >>.*/

class Token{
public:
	std::string kind;
	std::string value;
	Token(std::string ch)
		:kind(ch), value(""){}
	Token(std::string ch, std::string val)
		:kind(ch), value(val){}
};

class Token_stream{
public:
	Token get();
	void putback(Token t);

	private:
	bool full{false};
	Token buffer{""};
};

void Token_stream::putback(Token t){
	if(full) {
		error("putback() into a full buffer");
	}
	buffer = t;
	full = true;
}

Token Token_stream::get(){
	if(full){
		full = false;
		return buffer;
	}
	std::string ch; // this should be a string its reading letters 
	std::cin >> ch;

	if(ch == "and" || ch == "or" || ch == "but" || ch == ".")
		return Token{ch};
	else if(ch == "bird" || ch == "fish" || ch == "C++" || ch == "rules" || ch == "fly" || ch == "swim"){
		return Token{ch};
		//std::string val;
		//std::cin >> val;
		//return Token(ch, std::string(val));
	}
	else 
		error("Non noun entered.");

	return Token{""};
}

Token_stream ts;

std::string sentence();
std::string conjunction();
std::string noun();
std::string verb();

std::string sentence(){
	bool is_sentence = true;
	Token t = ts.get();
	std::string left = noun();

	if(t.kind == "bird" || t.kind == "fish" || t.kind == "C++"){
		t = ts.get();
		return left; //after getting nount, go to noun and check for verb
	}
	else
		error("Non noun entered.");
}

std::string noun(){
	Token t = ts.get();
	std::string left = conjunction();

	if(t.kind == "fly" || t.kind == "rules" || t.kind == "swim"){
		t = ts.get();
		return left;
	}
	else
		error("Non verb entered.");

	return left;
}

std::string conjunction(){
	Token t = ts.get();
	std::string left = sentence();
	std::string end = sentence();

	if(t.kind == "and"|| t.kind == "or" || t.kind == "but"){
		t = ts.get();
		return left;
	}else if(t.kind == ".")
		return  end;
	else
		error("Non verb entered.");
		

	return left;
		
}

int main(){
	try{
		std::string val = "ok";
		while(std::cin){
			//Token t = ts.get();
			sentence();
			//if(t.kind == ".")
			//std::cout << val << "\n";
			//else
			//ts.putback(t);
			std::cout << val << "\n";
			break;
		}
	   
	}catch(std::exception &e){
		std::cerr << e.what() << std::endl;
		return 1;
	}catch(...){
		std::cerr << "exception \n";
		return 2;
	}
}


