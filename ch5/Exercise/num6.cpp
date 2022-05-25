#include <cmath>
#include <iostream>

/*Quadratic equations are of the form
a ⋅ x^2 + b ⋅ x + c = 0
To solve these, one uses the quadratic formula:
*/

int main() {
  double b, a, c;
  std::cin >> a >> b >> c;
  double squaredNum =  std::sqrt(((b * b) - 4 * a * c));
  double addQuad = -b + squaredNum;
  double minQuad = -b - squaredNum;

  double totalAddQuad = addQuad / (2 * a);
  double totalMinQuad = minQuad / (2 * a);
  std::cout << totalAddQuad << "\n";
  std::cout << totalMinQuad << "\n";
}
