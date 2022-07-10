#include <exception>
#include <iostream>
#include "permutation.h"
#include <ostream>
#include <stdexcept>

void error(std::string er){
    std::cout << er << "\n";
}

permutation ch;

int permutation::getA(int a){
    std::cout << "Enter the first number\n";
    std::cin >> a;
    if(!std::cin){
        throw std::runtime_error("Not a valid input exiting program.");
        std::cout << "Enter the first number again\n";
        std::cin >> a;
    }
}

int permutation::getB(int b){
    std::cin.clear();
    std::cout << "Enter the second number\n";
    std::cin >> b;
    if(!std::cin){
        throw std::runtime_error("Not a valid input exiting program.");
    }
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

int permutation::answer(){
    int numerator, denom, result;
    int a, b;

    std::cout << "Enter 2 numbers\n";
    std::cin >> a >> b;

    numerator = ch.numerator(permutation::getA(a));
    denom = ch.denaminator(numerator, permutation::getB(b));
    result = numerator/denom;

    return result;
}