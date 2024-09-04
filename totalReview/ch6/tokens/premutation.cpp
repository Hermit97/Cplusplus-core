#include <iostream>
#include "error.h"
#include <limits>
#include <stdexcept>

int num1, num2;

int factorial(int num){
	if(num < 0 || num > 12) return 0;
	int sum = 1;
	for(int i = num; i > 0; --i){
		if(sum > std::numeric_limits<int>::max() / i)
			error("Invalid input");
		sum *= i;
	}
	return sum;
}

int to_premutations(){
	int numerator, denomenator, left, sum;

	numerator = factorial(num1);
	left = (num1 - num2);
	denomenator = factorial(left);
	sum = numerator / denomenator;

	return sum;
}

int to_combinations(){
	int numerator, denomenator, sum;

	numerator = to_premutations();
	denomenator = factorial(num2);
	sum = numerator / denomenator;

	return sum;
}

void input(){
	while(true){
		if(std::cin >> num1 >> num2){
			break;
		}else{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			error("Invalid input");
		}
	}
}

std::string ask(){
	std::string answer;	
	std::string pre = "pre";
	std::string com = "com";
	std::cout << "Do you want to solve premutation or combination?\n";

	std::cin >> answer;
	if(answer == pre)
		return answer;
	else if(answer == com)
		return answer;
	else if(!std::cin)
		error("Invalid input");
	else 
		error("Invalid input");
	return answer;
}

int main(){
	try{
		input();
		std::cout << num1 << " and " << num2 << "\n";
		if(ask() == "pre")
			std::cout << to_premutations() << "\n";
		else 
			std::cout << to_combinations() << "\n";
	}catch(std::runtime_error& e){
		std::cerr << e.what() << "\n";
		std::exit(0);
	}
}
