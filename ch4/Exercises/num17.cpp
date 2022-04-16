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
  int a, b, c;
  int quad; 
  int radic;
  int squared = x * x;

  quad = (a*(squared)) + (b*x) + c;
  quad = (a*(squared)) + (b*x) = - c;
  quad = ((squared)) + (b*x) = -c/a;

  //x^2+ bx/a + (b/2a)^2 = -c/a + (b/2a)^2
  int x = ((-b) + sqrt((b*b) - 4 *(a * c)))/(2*a); 
  
  std::cout << "Enter values for a, b, c, x\n";
  std::cin >> a >> b >> c;

  std::cout << "The result to the quadratic formula is: " << x << "\n";
}
