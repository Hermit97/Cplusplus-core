#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){

    double num1, big, small, current;

    std::cout << "Enter a number\n";
    std::cin >> num1;
    small = num1;
    big = num1;
    std::cout << big << " is the biggiest number so far\n";
    std::cout << small << " is the smallest number so far\n";

    while(std::cin >> num1){
        if(num1 < small){
            small = num1;
            std::cout << small << " is the smallest number so far\n";
        }else if(num1 > big){
            big = num1;
            std::cout << big << " is the new biggiest number so far\n";
        }else{
            std::cout << "The number you entered is neither bigger than the biggest number or smaller than the biggest.\n";
        }
    }
    return 0;
}
