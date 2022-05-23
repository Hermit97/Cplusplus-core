#include <iostream>
//Add to the program so that it can also convert from Kelvin to Celsius.

double ctok(double c){
    double k = c + 273.15;
    if(c < k){
	//error("ERROR! Below -273.15C");
	throw c;
    }
    return k;
}

double ktoc(double k){
    double c = k - 273.15;

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

        double k = ctok(c);
        std::cout << k << "\n" ;
    }
    catch(double c){
        error("Range error\n");
    }
}
