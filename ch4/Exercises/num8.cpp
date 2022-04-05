#include <cctype>
#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Try to calculate the number of rice grains that the inventor asked for in
exercise 8 above. You’ll find that the number is so large that it won’t fit
in an int or a double . Observe what happens when the number gets too
large to represent exactly as an int and as a double . What is the larg-
est number of squares for which you can calculate the exact number of
grains (using an int )? What is the largest number of squares for which
you can calculate the approximate number of grains (using a double )?*/

int main() {

    //int squares;
    //int riceGrain = 1;

    double squares;
    double riceGrain = 1;

    std::cin >> squares;

    for(int i = 1; i <= squares; i++){
        std::cout << "Square = " << i << " Rice grain = " << riceGrain << "\n";
        riceGrain = riceGrain * 2;
    }

    //Biggest int value is 31 squares
    //Biggest double value is 1024 squares

}
