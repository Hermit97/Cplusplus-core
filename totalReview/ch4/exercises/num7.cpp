/*Try to calculate the number of rice grains that the inventor asked for in
exercise 8 above. You’ll find that the number is so large that it won’t fit
in an int or a double. Observe what happens when the number gets too
large to represent exactly as an int and as a double. What is the larg-
est number of squares for which you can calculate the exact number of
grains (using an int)? What is the largest number of squares for which
you can calculate the approximate number of grains (using a double)?*/

#include <iostream>
#include <cmath>
#include <cfloat>

int main(){
    int squares = 1;
    double rice = 1;
    bool isTrue = false;
    double nextRice;

    //while(rice < 1000000000){
    /*while(std::isfinite(rice)){
        rice = rice * 2;
        ++squares;
        std::cout << "square " << squares << " rice " << rice << "\n";
    }
    */


    while(isTrue == false){
        nextRice = rice * 2;
        if(nextRice > DBL_MAX){
            std::cout << "Cant hold any more\n";
            isTrue = true;
        }
        else{
            rice = nextRice;
            ++squares;
            std::cout << "square " << squares << " rice " << rice << "\n";
        }

    }
}
