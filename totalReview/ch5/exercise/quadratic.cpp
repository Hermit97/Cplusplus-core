#include <iostream>
#include "error.h"
#include <cmath>

//positive
double q_pos(double b, double a, double c){
  //put in a error check for b2 - 4ac if its less than zero make sure it fails
  double formula = -b + (sqrt((b*b) - 4 * (a * c)));
  double result = formula / (2 * a);
  return result;
}


int main(){
  double a, b, c;
  std::cout << "Enter a b c\n";
  std::cin >> b >> a >> c;
  double quad = q_pos(b, a, c);
  std::cout << quad << "\n";

}
