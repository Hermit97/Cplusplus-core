#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Make a vector holding the ten string values "zero" , "one" , . . . "nine" .
Use that in a program that converts a digit to its corresponding
spelled-out value; e.g., the input 7 gives the output seven .
Have the same program, using the same input loop, convert spelled-out numbers into
their digit form; e.g., the input seven gives the output 7.*/


int main() {
    int input;
    std::vector<std::string> numValues = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
};

    std::cout << "Enter a integer input and the corresponding number will be outputting as a worded string\n";
    std::cin >> input;

    while(std::cin.fail()){
        std::cout << "WRONG, enter a integer\n";
        std::cin.clear();
        std::cin.ignore(256, '\n');
        std::cin >> input;
    }

    for(int i = 0; i <= numValues.size(); i++){
        //Have the loop tranverse over the vector, it stops on the same i value as in the vector and prints it.
        if()
    }



}
