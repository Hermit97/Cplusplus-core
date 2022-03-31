#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Modify the “mini calculator” from exercise 5 to accept (just) single-digit
  numbers written as either digits or spelled out.*/

int main(){
    double num1, num2;
    char op;
    double arith;
    bool isTrue = true;

    std::vector<std::string> numValues = {
            "zero",
            "one",
            "two",
            "three",
            "four",
            "five",
            "six",
            "seven",
            "eight",
            "nine",
    };


    std::cout << "Enter a number followed by a operator followed by another number.\n";

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    while(num1 > 9 || num1 < -9){
        std::cout << "Must be single digit, try again\n";
        std::cin >> num1;
    }

    //Check for the first invalid number input
    while(std::cin.fail()){
        std::cout << " Not an int\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cout << "Enter another number\n";
        std::cin >> num1;
    }

    std::cout << "Enter the operator: ";
    std::cin >> op;

    while(op != '+' && op != '-' && op != '*' && op != '/'){
        std::cout << "Wrong input, please enter a relevant operator\n";
        std::cin >> op;
    }

    std::cout << "Enter the second number: ";
    std::cin >> num2;
    while(num2 > 9 || num2 < -9){
        std::cout << "Must be single digit, try again\n";
        std::cin >> num2;
    }
    //Check for the first invalid number input
    while(std::cin.fail()){
        std::cout << " Not an int\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cout << "Enter another number\n";
        std::cin >> num2;
    }

    if(op == '+')
        arith = num1 + num2;
    else if(op == '-')
        arith = num1 - num2;
    else if(op == '*')
        arith = num1 * num2;
    else if(op == '/')
        arith = num1 / num2;

    std::cout << "You entered: " << num1 << " " << op << " " << num2 <<  " = " << arith << "\n";


}
