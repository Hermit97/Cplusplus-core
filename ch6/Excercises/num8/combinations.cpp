#include <iostream>
#include <exception>
#include "permutation.h"
#include "combinations.h"

int combinations::getB(int b){
    std::cin.clear();
    std::cout << "Enter the second number\n";
    std::cin >> b;
    if(!std::cin){
        throw std::runtime_error("Not a valid input exiting program.");
    }
    return b;
}

int combinations::denomentator(int b){
    int factorial = 1;
    for(int i = b; i > 0; --i)
        factorial = factorial * i;
    return factorial;
}
