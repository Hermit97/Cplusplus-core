#include <iostream>
/*
The following program takes in a temperature value in Celsius and con-
verts it to Kelvin. This code has many errors in it. Find the errors, list
them, and correct the code.
*/
double ctok(double c){
double k = c + 273.15;
return k;
}

// converts Celsius to KelvinCHAPTER 5 • ERRORS
int main(){
    double c = 0;
    std::cin >> c;
    double k = ctok(c);
    std::cout << k << "\n" ;
}
