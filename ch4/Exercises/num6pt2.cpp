#include <cctype>
#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Modify the “mini calculator” from exercise 5 to accept (just) single-digit
  numbers written as either digits or spelled out.*/

//Make both ways of taking input into sepeerate functions

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
    "nine"
};

int getNumber(){
    const int notASymbol = numValues.size();

    int num1 = notASymbol;
    std::string s;

    if(std::cin >> num1){
        std::cout << num1 << " isss\n";
    }else{
        std::cin.clear();
        std::cout << "Enter a string\n";
        std::cin >> s;
        std::cout << s << "\n";
    }

    return num1;
}

int main(){
    while(true){
        int val1 = getNumber();
    }
}
