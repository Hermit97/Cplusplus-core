#include <iostream>
#include "error.h"

std::string s = "Less than 0";
double lowest_temp = -273.15;

double ctok(double c){
  double k = c + 273.15;
  if(c < lowest_temp)
     error(s);
  return k;
}

// convert back to celsius from kelvin
double ktoc(double k){
  double c = k + 273.15;
  if(k < lowest_temp)
     error(s);
  return c;
  
}

int main(){
  double c = 0;
  try{
    std::cin >> c;
    double k = ctok(c);
    std::cout << k << " kelvin" <<  '\n';

    //Use the kelvin after its converted and convert that same one back to celsius using the same output and single input
    std::cin >> k;
    double c = ktoc(k);
    std::cout << c << " celsius" <<  '\n';
  }

  catch(std::runtime_error& e){
    std::cerr << "runtime error " << e.what() << '\n';
  }
}
