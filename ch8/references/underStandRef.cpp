#include <iostream>

void increase(unsigned & x){
	++x;
	std::cout << x << "\n";
}

int main(){
	unsigned i = 10;
	increase(i);

	std::cout << "After changes\n" << i << "\n";
	
}
