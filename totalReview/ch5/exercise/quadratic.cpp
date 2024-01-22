#include <iostream>
#include "error.h"
#include <cmath>
#include <stdexcept>

//positive
std::string neg_root = "No real discriminants";
double q_pos(double b, double a, double c){
  //put in a error check for b2 - 4ac if its less than zero make sure it fails
  //double formula = -b + (sqrt((b*b) - 4 * (a * c)));
  double squared = b * b;
  double end = a * c;
  double inside = squared - 4 * end;
  if(inside < 0)
    error(neg_root);
  return inside;
}

double numerator(double b){
  double opposite_coefficient = -b;
  return opposite_coefficient;
}

int main(){
  double a, b, c, num;
  std::cout << "Enter a b c\n";
  std::cin >> b >> a >> c;
  try{
  double quad = q_pos(b, a, c);
  //std::cout << quad << "\n";
  num = numerator(b);
  double result = num / (2 * a);
  std::cout << result << "\n";
  }
  catch(std::runtime_error& e){
    std::cerr << "Runtime error: " << e.what() << '\n';
  }

}
