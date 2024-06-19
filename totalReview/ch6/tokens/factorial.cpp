#include <iostream>

int main(){
	int n;
	int fact = 1;
	std::cout << "Enter number\n";
	std::cin >> n;

	for(int i = n; i >= 1; --i){
		fact = fact * i;
		//std::cout << i << "=" << fact << "\n";
	}
	std::cout << fact << "\n";

}
