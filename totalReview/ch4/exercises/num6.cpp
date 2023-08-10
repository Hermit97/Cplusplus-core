/*There is an old story that the emperor wanted to thank the inventor of
the game of chess and asked the inventor to name his reward. The inven-
tor asked for one grain of rice for the first square, 2 for the second, 4 for
the third, and so on, doubling for each of the 64 squares. That may sound
modest, but there wasn’t that much rice in the empire! Write a program to
calculate how many squares are required to give the inventor at least 1000
grains of rice, at least 1,000,000 grains, and at least 1,000,000,000 grains.
You’ll need a loop, of course, and probably an int to keep track of which
square you are at, an int to keep the number of grains on the current
square, and an int to keep track of the grains on all previous squares. We
suggest that you write out the value of all your variables for each iteration
of the loop so that you can see what’s going on.*/

#include <iostream>

void grain_stuff(int n){
    int current_square;
    int grains_current_square;
    int grains_previous_squares;

    grains_current_square = 1;
    current_square = 1;

    while(grains_current_square  < n) {

        if(grains_current_square == 1){
            std::cout << "Square = " << current_square << "\n";
            std::cout << "Previous rice grain = " << "none" << "\n";
            std::cout << "Current rice grain = " << grains_current_square << "\n\n";

        }

        grains_previous_squares = grains_current_square;
        grains_current_square = grains_current_square * 2;
        ++current_square;

        std::cout << "Square = " << current_square << "\n";
        std::cout << "Previous rice grain = " << grains_previous_squares << "\n";
        std::cout << "Current rice grain = " << grains_current_square << "\n\n";

    }
}
int main(){
    //1000
    std::cout << "1000 grains of rice\n";
    grain_stuff(1000);

    std::cout << "100000 grains of rice\n";
    grain_stuff(1000000);

    std::cout << "1000000000 grains of rice\n";
    grain_stuff(1000000000);


    //get largest number which is > 64 since 2^64 == max value it can hold
   /*Try to calculate the number of rice grains that the inventor asked for in
exercise 8 above. You’ll find that the number is so large that it won’t fit
in an int or a double. Observe what happens when the number gets too
large to represent exactly as an int and as a double. What is the larg-
est number of squares for which you can calculate the exact number of
grains (using an int)? What is the largest number of squares for which
you can calculate the approximate number of grains (using a double)?*/


}
