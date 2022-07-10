#include <exception>
#include <iostream>
#include "permutation.h"
#include <ostream>
#include <stdexcept>

void error(std::string er){
    std::cout << er << "\n";
}

permutation ch;

int permutation::getA(){
    int a;
    std::cout << "Enter the first number\n";
    std::cin >> a;
    if(!std::cin){
        throw std::runtime_error("Not a valid input exiting program.");
        std::cout << "Enter the first number again\n";
        std::cin >> a;
    }
    return a;
}

int permutation::getB(){
    int b;
    std::cin.clear();
    std::cout << "Enter the second number\n";
    std::cin >> b;
    if(!std::cin){
        throw std::runtime_error("Not a valid input exiting program.");
    }
    return b;
}

int permutation::numerator(){
    int a = ch.getA();
    int factorial = 1;
    for(int i = a; i > 0; --i)
        factorial = factorial * i;
    return factorial;
}

int permutation::denaminator(){
    int diff = ch.getA() - ch.getB();
    int factorial = 1;
    for(int i = diff; i > 0; --i)
        factorial = factorial * i;
    return factorial;
}

int permutation::answer(){
    int numerator, denom, result;


    numerator = ch.numerator();
    denom = ch.denaminator();
    result = numerator/denom;

    return result;
}