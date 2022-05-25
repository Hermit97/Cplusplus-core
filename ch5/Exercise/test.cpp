#include <cmath>
#include <iostream>

/*Quadratic equations are of the form
a ⋅ x^2 + b ⋅ x + c = 0
To solve these, one uses the quadratic formula:
*/

int main() {
  double b, a, c;
  double totalQuad;
  std::cin >> a >> b >> c;
  double squaredNum =  std::sqrt(((b * b) - 4 * a * c));
  //std::cin >> a >> b >> c;

  double quad = -b + squaredNum;
  totalQuad = quad / (2 * a);
  std::cout << totalQuad << "\n";
}
