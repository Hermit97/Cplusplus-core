#include <iostream>
#include "permutation.h"

void error(std::string er){
    std::cout << er << "\n";
}

int permutation::getA(){
    int a;
    std::cout << "Enter the first number\n";
    std::cin >> a;
    while(!std::cin){
        error("Not a valid input.");
    }
    return a;
}

int permutation::getB(){
    int b;
    std::cout << "Enter the first number\n";
    std::cin >> b;
    while(!std::cin){
        error("Not a valid input.");
    }
    return b;
}

int permutation::numerator(int a){
    int factorial = 1;
    for(int i = a; i > 0; --i)
        factorial = factorial * a;
    return factorial;
}

int permutation::denaminator(int a, int b){
    int diff = a - b;
    int factorial = 1;
    for(int i = diff; diff > 0; --diff)
        factorial = factorial * diff;
    return factorial;
}

permutation num;
permutation denom;

int permutation::answer(){
    num.denaminator(int a, int b);
}
