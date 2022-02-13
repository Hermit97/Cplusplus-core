#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    char op;
    int num1, num2;


    std::cout << "Enter a operator followed by two numbers. \n";
    std::cin >> op >> num1 >> num2;

    if(op == '+')
       std::cout << num1 + num2 << "\n";
    else if(op == '-')
        std::cout << num1 - num2 << "\n";
    else if(op == '*')
        std::cout << num1 * num2 << "\n";
}
