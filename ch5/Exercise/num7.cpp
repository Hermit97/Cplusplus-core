#include <cmath>
#include <iostream>

/*There is a problem, though: if b2–4ac is less than zero, then it will fail.
Write a program that can calculate x for a quadratic equation. Create a
function that prints out the roots of a quadratic equation, given a, b, c.
When the program detects an equation with no real roots, have it print
out a message. How do you know that your results are plausible? Can
you check that they are correct?*/

// Print out the roots of the quadratic
void checkRoots(double a, double b, double c) {
  double roots = ((b * b) - 4 * a * c);
  if (roots < 0)
    throw roots;
}

int main() {
  try {
    double a, b, c;
    std::cin >> a >> b >> c;
    double squaredNum = std::sqrt(((b * b) - 4 * a * c));
    double addQuad = -b + squaredNum;
    double minQuad = -b - squaredNum;

    double totalAddQuad = addQuad / (2 * a);
    double totalMinQuad = minQuad / (2 * a);
    checkRoots(a, b, c);
    std::cout << totalAddQuad << "\n";
    std::cout << totalMinQuad << "\n";
  }catch(double wrongRoots){
      std::cout << "No real roots\n";
  }
}
