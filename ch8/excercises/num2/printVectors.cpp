#include <iostream>
#include <vector>

/*Write a function print() that prints a vector of int s to cout . Give it two
arguments: a string for “labeling” the output and a vector .
*/


void print(std::string label, std::string output){
	std::vector<int> bunchOfNums; 
	int s;

	std::cout << "Enter a number\n";
	std::cin >> s;

	for(int i = 0; i < bunchOfNums.size(); i++){
		bunchOfNums.push_back(i);
	}

	for(int i = 0; i < bunchOfNums; i++){
		std::cout bunchOfNums[i] << "\n";
	}

}

int main(){
	std::string l, o;

	print(

}
