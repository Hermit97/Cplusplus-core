#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>

/*Write a program that performs as a very simple calculator. Your calculator
should be able to handle the four basic math operations — add, subtract,
multiply, and divide — on two input values. Your program should prompt
the user to enter three arguments: two double values and a character to
represent an operation. If the entry arguments are 35.6 , 24.1 , and '+' , the
program output should be The sum of 35.6 and 24.1 is 59.7 . In Chapter 6
we look at a much more sophisticated simple calculator.*/

int main(){
    double num1, num2;
    char op;
    double arith;


    std::cout << "Enter a number followed by a operator followed by another number.\n";

    std::cout << "Enter the first number: ";
    std::cin >> num1;

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
