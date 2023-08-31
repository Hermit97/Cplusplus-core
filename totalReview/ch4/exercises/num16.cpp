#include <algorithm>
#include <cmath>
#include <iostream>
#include <math.h>
#include <vector>
/*Write a program to solve quadratic equations. A quadratic equation is of
the form ax^2+bx+c=0 x = (-b ± √(b^2 - 4ac)) / 2a*/

int main() {
  double a, b, c;
  double squared;
  double pos_quadratic;
  double sq;
  double pos_final_quad;
  double neg_final_quad;

  std::cout << "Enter a x b c\n";
  std::cin >> a >> b >> c;
  double denom = 2.0 * a;

  squared = b * b;
  if (sq < 0)
    std::cout << "No real solutions\n";
  else {

  sq = squared - (4 * a * c);

  pos_quadratic = std::sqrt(sq);

  pos_final_quad = (-b + pos_quadratic) / (2.0 * a);
  neg_final_quad = (-b - pos_quadratic) / (2.0 * a);
  std::cout << "Answer for pos: " << pos_final_quad << "\n";
  std::cout << "Answer for neg: " << neg_final_quad << "\n";
  }
  return 0;
}
