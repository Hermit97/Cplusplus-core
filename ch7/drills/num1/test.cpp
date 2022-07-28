#include <sstream>
#include <iostream>

int main(){
	char a;
	std::cout << "Enter a number\n";
	std::cin >> a;

	std::cout << "You entered  " << a << "\n";
//	std::cin.unget();
	std::cin.get();
	std::cout << "then its " << a << "\n";
	
}
