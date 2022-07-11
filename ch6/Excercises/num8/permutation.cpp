#include <exception>
#include <iostream>
#include "permutation.h"
#include <ostream>
#include <stdexcept>


void error(std::string er){
    std::cout << er << "\n";
}

permutation ch;

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
    top = a;
    bot = b;

    numerator = ch.numerator(top);
    denom = ch.denaminator(top, bot);
    result = numerator/denom;
    return result;
}
