#include <iostream>
#include "error.h"
#include <cmath>
#include <stdexcept>

//positive
std::string neg_root = "No real discriminants";
double q_pos(double b, double a, double c){
  double squared = b * b;
  double end = a * c;
  double inside = squared - 4 * end;
  if(inside < 0)
    error(neg_root);
  return inside;
}

//negative
double q_neg(double b, double a, double c){
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
  double a, b, c, num_pos, num_neg;
  std::cout << "Enter a b c\n";
  std::cin >> b >> a >> c;
  try{
  double quad_neg = q_neg(b, a, c);
  double quad_pos = q_pos(b, a, c);
  num_neg = numerator(b) - std::sqrt(quad_neg);
  num_pos = numerator(b) + std::sqrt(quad_pos);
  double result_pos = num_pos / (2 * a);
  double result_neg = num_pos / (2 * a);

  std::cout << "Positive result: " << result_pos << "\n";
  std::cout << "Positiv result: " << result_neg << "\n";
  }
  catch(std::runtime_error& e){
    std::cerr << "Runtime error: " << e.what() << '\n';
  }
}
