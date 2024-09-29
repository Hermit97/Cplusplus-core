#include <iostream>
int main(){
	int base = 4;
	int power = 3;
	int sum = 1;
	for(int i = 0; i < power; ++i){
		sum = sum * base;
	}
	std::cout << sum << "\n";
}
