#include <iostream>
#include "error.h"

//Fahrenheit f = 9/5 * c + 32
std::string to_low_c = "Cannot be below absolute zero (-273.15C)";
std::string to_low_f = "Cannot be below absolute zero (-459.67F)";

double c_to_f(double c){
  double half = (9.0/5);
  double absolute_zero = -273.15;
  double f = half * c + 32;
  if(c < absolute_zero)
    error(to_low_c);
  return f;
}

//Celsius c = 5/9 * (F - 32)
double f_to_c(double f){
  double absolute_zero = -459.67;
  double half = (9.0/5);
  double c = (f - 32) * 5;
  double result = c / 9;
  if(f < absolute_zero)
    error(to_low_c);
  return result;
}

int main(){
  double num;
  std::cout << "Enter a number to be converted\n";
  std::cin >> num;

  try{
  double fahrenheit = c_to_f(num);
  std::cout << fahrenheit << "\n";

  double celsius = f_to_c(fahrenheit);
  std::cout << celsius << "\n";
  }

  catch(std::runtime_error& e){
    std::cerr << "runtime error "  << e.what() << "\n";
  }
}
