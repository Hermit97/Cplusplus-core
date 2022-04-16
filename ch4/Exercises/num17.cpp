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
  int a, b, c, x;
  int quad; 
  int radic;
  int squared = x * x;

  std::cout << "Enter values for a, b, c, x\n";
  std::cin >> a >> b >> c;
  //quad = (-b + sqrt((b*b)-4*(a*c)))/(2 * a);

  int sq = sqrt(16-576);
  std::cout << sq << "\n";

  //std::cout << "The result to the quadratic formula is: " << quad << "\n";
}
