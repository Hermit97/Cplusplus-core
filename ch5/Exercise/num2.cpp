#include <iostream>

/*Absolute zero is the lowest temperature that can be reached; it is –273.15°C,
or 0K. The above program, even when corrected, will produce errone-
ous results when given a temperature below this. Place a check in the
main program that will produce an error if a temperature is given below –273.15°C.
*/

double ctok(double c){
    double k = c + 273.15;
    return k;
}

void error(std::string errorMessage){
  std::cout << errorMessage;
}

// converts Celsius to KelvinCHAPTER 5 • ERRORS
int main(){
    try{
        double c;
        double minCelsius = -273.15;
        std::cin >> c;

        if(c < minCelsius){
            //error("ERROR! Below -273.15C");
            throw c;
        }

        double k = ctok(c);
        std::cout << k << "\n" ;
    }
    catch(double c){
        error("Range error\n");
    }
}
