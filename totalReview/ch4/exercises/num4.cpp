/*Write a program that performs as a very simple calculator. Your calculator
should be able to handle the four basic math operations — add, subtract,
multiply, and divide — on two input values. Your program should prompt
the user to enter three arguments: two double values and a character to
represent an operation. If the entry arguments are 35.6, 24.1, and '+', the
program output should be The sum of 35.6 and 24.1 is 59.7. In Chapter 6
we look at a much more sophisticated simple calculator.*/

#include <iostream>

int main(){
    int num1, num2;
    char op;

    std::cout << "Enter a number opereator then a number\n";
    std::cin >> num1 >> op >> num2;

    if(op == '+'){
        int sum = num1 + num2;
        std::cout << sum << "\n";
    }
    else if(op == '-'){
        int diff = num1 - num2;
        std::cout << diff << "\n";
    }
    else if(op == '*'){
        int product = num1 * num2;
        std::cout << product << "\n";
    }
    else if(op == '/'){
        int div = num1 / num2;
        std::cout << div << "\n";
    }




}
