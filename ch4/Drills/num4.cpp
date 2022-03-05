#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){

    double num1, num2;
    double differ = 1.0/100;

    std::cout << "Enter two numbers\n";
    while(std::cin >> num1 >> num2){
        std::cout << "Num1:  "<< num1 << "\n num2:" << num2 << "\n";
       if(num1 > num2){
           std::cout << "Num1: " << num1 << " is bigger "
                     << "Num2 is smaller\n";
       }else if(num1 < num2) {
           std::cout << "Num2: " << num2 << " is bigger "
                     << "Num1 is smaller\n";
       }else if(num1 == num2){
           std::cout << "The numbers are equal\n";
       }

       if((num1 - num2) < differ || (num2 - num1) < differ){
           std::cout << "The numbers are almost equal\n";
       }
    }
    return 0;
}
