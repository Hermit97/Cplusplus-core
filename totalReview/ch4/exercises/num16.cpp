#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
/*Write a program to solve quadratic equations. A quadratic equation is of
the form ax^2+bx+c=0 x = (-b ± √(b^2 - 4ac)) / 2a*/

int main() {
    int a, x, b, c;
    int squared;
    double pos_quadratic;
    int sq;
    double pos_final_quad;
    int denom = 2 * a;

    std::cout << "Enter a x b c\n";
    std::cin >> a >> x >> b >> c;

    squared = b*b;
    sq = squared - (4 * (a*c));

    pos_quadratic = -(b) + std::sqrt(sq);

    pos_final_quad = pos_quadratic / denom;
    std::cout << pos_final_quad << "\n";
    //std::cout << pos_quadratic << "\n";



}
