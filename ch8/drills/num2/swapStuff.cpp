#include <iostream>

void swap_v(int a, int b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

//This function is not gonna compile because its trying to change a constant reference object. 
/*void swap_cr(const int& a, const int& b){
	int temp;
	temp = a;
	a = b; b = temp; }*/

int main(){
	int x = 7;
	int y = 9;
	
	std::cout << "X is = " << x << " Y is = " << y << "\n";

	/*swap_r(x, y);
	std::cout << "Swap_r:\n";
	std::cout << "X is = " << x << " Y is = " << y << "\n";
	//Correct results.
	*/
	
	swap_v(x, y);
	std::cout << "Swap_v:\n";
	std::cout << "X is = " << x << " Y is = " << y << "\n";
	//Does not swap x and y.
	//because only the temp copy of the two is changed not the original local objects
}
