#include <exception>
#include <iostream>

//Do exercise 3 again, but this time handle the error inside ctok() .

double ctok(double c){

    double k = c + 273.15;
    return k;
}

void error(std::string errorMessage){
  std::cout << errorMessage;
}

// converts Celsius to KelvinCHAPTER 5 • ERRORS
int main(){
    try {
        double c;
        double minCelsius = -273.15;
        std::cin >> c;
        double k = ctok(c);
        std::cout << k << "\n" ;
    }

    catch(){

    }
}
