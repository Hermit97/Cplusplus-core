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

int main(){
    int input;
    std::string numberName;
    int i;
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

    //ConvertIntToString
    std::cout << "Enter an integer to get its string value\n";
    std::cin >> input;

    if(input >= 0 && input <= 9){
        std::cout << numValues[input] << "\n";
    }else{
        std::cout << "Out of bounds\n";
    }

    //ConvertStringToInt
    std::cin.clear();
    std::cout << "Enter a number to get it back in words\n";
    std::cin >> numberName;

    for(int i = 0; i <= numValues.size(); i++){
        if(numberName == numValues[i]){
            std::cout << numberName << " is " << i << "\n";
        }
    }

}
