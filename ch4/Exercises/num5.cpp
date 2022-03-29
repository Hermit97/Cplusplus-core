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
their digit form;

e.g., the input seven gives the output 7.*/


int main() {
    int input = 0;
    bool cont = true;
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

    while(cont){
        if(input >= 0 && input <= 9){
            std::cout << numValues[input];
            cont = false;
//Now convert the num back to the spelled digit using the same input loop.

        }
    }

    /*while(cont){
        if(input == 0){
            std::cout << numValues[0] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 1){
            std::cout << numValues[1] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 2){
            std::cout << numValues[2] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 3){
            std::cout << numValues[3] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 4){
            std::cout << numValues[4] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 5){
            std::cout << numValues[5] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 6){
            std::cout << numValues[6] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 7){
            std::cout << numValues[7] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 8){
            std::cout << numValues[8] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }else if(input == 9){
            std::cout << numValues[9] << "\n";
            std::cout << "Converted back is " << input;
            cont = false;
        }
    }

    std::cout << "\n\n";
    for(int i = 0; i < numValues.size(); i++){
        std::cout << i  <<  " " << numValues[i] << "\n";
    }
    std::cout << "Converted back is " << input;
    */
}
