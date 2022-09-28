#include <iostream>

namespace X{
	int var;
	void print();
}

namespace Y{
	int var;
	void print();
}

namespace Z{
	int var;
	void print();
}

void X::print(){
	std::cout << X::var << "\n";
}

void Y::print(){
	std::cout << Y::var << "\n";
}

void Z::print(){
	std::cout << Z::var << "\n";
}

int main(){
	X::var = 7;
	X::print();

	using namespace Y;
	var = 9;
	print();
	{
		using Z::var;
		using Z::print;
		var = 11;
		print();
	}

	print();
	X::print();


}
