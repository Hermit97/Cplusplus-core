#include <iostream>
#include <exception>
#include "permutation.h"
#include "combinations.h"

permutation num;
int combinations::getB(int b){
    int denom = num.getA(b);
    return denom;
}

int combinations::denomentator(int b){
    int factorial = 1;
    for(int i = b; i > 0; --i)
        factorial = factorial * i;
    return factorial;
}
