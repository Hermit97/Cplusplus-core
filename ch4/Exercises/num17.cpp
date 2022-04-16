#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include <system_error>
#include <vector>

/*Write a program to solve quadratic equations. A quadratic equation is of
  the form ax^2 + bx + c = 0 */

int main(){
  double a, b, c;
  int quad; 

  std::cout << "Enter values for a, b, c, x\n";
  std::cin >> b >> a >> c;
  double addQuad = (-(b) + sqrt((b*b)-4*a*c))/(2 * a);
  double subQuad = (-(b) - sqrt((b*b)-4*a*c))/(2 * a);


  std::cout << "The result to the addition quadratic formula is: " << addQuad << "\n";
  std::cout << "The result to the subs addition quadratic formula is: " << subQuad << "\n";
}
