#include <iostream>
#include "permutation.h"

void error(std::string er){
    std::cout << er << "\n";
}

int permutation::getA(int a){
    std::cout << "Enter the first number\n";
    std::cin >> a;
    while(!std::cin){
        error("Not a valid input.");
    }
    return a;
}

int permutation::getB(int b){
    std::cout << "Enter the second number\n";
    std::cin >> b;
    while(!std::cin){
        error("Not a valid input.");
    }
    return b;
}

int permutation::numerator(int a){
    int factorial = 1;
    for(int i = a; i > 0; --i)
        factorial = factorial * i;
    return factorial;
}

int permutation::denaminator(int a, int b){
    int diff = a - b;
    int factorial = 1;
    for(int i = diff; i > 0; --i)
        factorial = factorial * i;
    return factorial;
}

permutation num;

int permutation::answer(){
    int num1, num2, a, b, numerator, denom, result;

    a = num.getA(num1);
    b = num.getB(num2);

    numerator = num.numerator(a);
    denom = num.denaminator(a, b);
    result = numerator/denom;

    return result;
}

int main(){
    int final = num.answer();
    std::cout << final << "\n";
}
