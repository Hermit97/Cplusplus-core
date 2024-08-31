#include <iostream>
#include "error.h"

int num1, num2;
int to_premutations();
int to_combinations();


int factorial(int num){
	int sum = 1;
	for(int i = num; i > 0; --i){
		sum = sum * i;
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
	char temp_num1, temp_num2;
	std::cin >> temp_num1 >> temp_num2;

	//Checks if they are numbers
	try{
		if(!std::isdigit(temp_num1) || !std::isdigit(temp_num2)){
			error("invalid input");				
	}
		//convert them back to int and assign them to the args
		num1 = temp_num1 - '0';
		num2 = temp_num2 - '0';
	}catch(std::runtime_error& e){
		std::cerr << e.what() << "\n";
		std::exit(0);
	}
}

std::string ask(){
	std::string answer;	
	std::string pre = "premutation";
	std::string com = "combination";
	std::cout << "Do you want to solve premutation or combination?\n";

	try{
		std::cin >> answer;
		if(answer == pre)
			return answer;
		else if(answer == com)
			return answer;
		else if(!std::cin)
			error("Invalid input");
		else 
			error("invalid input");
	}catch(std::runtime_error& e){
		std::cerr << e.what() << "\n";	
		std::exit(0);
	}

	return answer;
}

int main(){
	input();
	std::cout << num1 << " and " << num2 << "\n";
	if(ask() == "premutations")
		std::cout << to_premutations() << "\n";
	else 
		std::cout << to_combinations() << "\n";
}
