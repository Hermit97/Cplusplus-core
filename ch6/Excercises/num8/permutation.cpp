#include <exception>
#include <iostream>
#include "permutation.h"
#include <ostream>
#include <stdexcept>

void error(std::string er){
    std::cout << er << "\n";
}

int permutation::getA(int a){
    std::cout << "Enter the first number\n";
    std::cin >> a;
    if(!std::cin){
        throw std::runtime_error("Not a valid input exiting program.");
        std::cout << "Enter the first number again\n";
        std::cin >> a;
    }
    return a;
}

int permutation::getB(int b){
    std::cin.clear();
    std::cout << "Enter the second number\n";
    std::cin >> b;
    if(!std::cin){
        throw std::runtime_error("Not a valid input exiting program.");
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
    try{
        int final = num.answer();
        std::cout << final << "\n";
    }catch(std::exception& e){
        std::cerr << "ERROR " << e.what() << "\n";
    }
}
