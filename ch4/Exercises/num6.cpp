#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Modify the “mini calculator” from exercise 5 to accept (just) single-digit
  numbers written as either digits or spelled out.*/

//Creates and gives vector values
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

int number(){
    int num = numValues.size();
    bool isTrue = true;
    std::cout << "Enter value for num1\n";
    std::cin >> num;

    //Check if number is out of bounds
    while(isTrue){
        if(num < 0 || num > 9){
            std::cout << "Out of bounds, try again\n";
            std::cin.clear();
            std::cin >> num;
        }else
            isTrue = false;
    }

    std::string wordNum;
    std::cin >> wordNum;

    return num;

}

int main(){

    number();

}
