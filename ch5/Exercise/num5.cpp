#include <iostream>

/*Write a program that converts from Celsius to Fahrenheit and from Fahr-
enheit to Celsius (formula in §4.3.3). Use estimation (§5.8) to see if your
results are plausible.*/


//Convert f to c
double ftoc(){
    double f;
    double c;
    if(!(std::cin >> f))
        throw f;
    c = (f - 32) * .5556;
    return c;
}

//Convert c to f
double ctof(){
    double f;
    double c;
    if(!(std::cin >> c))
        throw f;
    f = (c * 1.8) + 32;
    return f;
}

int main(){
    try{
        int x;
        int z;
        std::cout << "Enter 1 to convert f to c and 2 to xoncert c to f\n";
        std::cin >> x;

        if(x == 1){
            double c = ftoc();
            std::cout << "f to c is " << c << "\n";
        }else if(x == 2){
            double f = ctof();
            std::cout << "c to f is " << f << "\n";
        }
    }catch(double x){
        std::cout << "Wrong input\n";
    }
}
