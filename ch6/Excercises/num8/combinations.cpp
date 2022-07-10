#include <iostream>
#include <exception>
#include "permutation.h"
#include "combinations.h"

permutation number;
combinations n2;
int combinations::getNumerator(){
    int numer = number.answer();
    return numer;
}

int combinations::denomentator(){ 
    int a;
    std::cin >> a;
    int b = number.getA(a);
    int factorial = 1;
    for(int i = b; i > 0; --i)
        factorial = factorial * i;
    return factorial;
}

int combinations::answer(){
    int result = n2.getNumerator() / n2.denomentator();
    return result;
}
