#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    int num1, num2, num3;
    int small = 0;
    int mid = 0;
    int big = 0;

    std::cout << "Enter three numbers \n";

    std::cin >> num1 >> num2 >> num3;

    std::cout << "You entered \n" << num1 << "\n" << num2 << "\n" << num3 << "\n";
    std::cout << "Numerically the order is \n";

    if(num1 > num2 && num1 > num3){
        big = num1;
        if(num2 < num1 && num2 > num3){
            mid = num2;
            small = num3;
        }else{
            mid = num3;
            small = num2;
        }
    }else if(num2 > num1 && num2 > num3){
        big = num2;
        if(num1 < num2 && num1 > num3){
            mid = num1;
            small = num3;
        }else{
            mid = num3;
            small = num1;
        }

    }else if(num3 > num1 && num3 > num2){
        big = num3;
        if(num2 < num3 && num2 > num1){
            mid = num2;
            small = num1;
        }else{
            mid = num1;
            small = num2;
        }
    }

    std:: cout << "big: " << big << " mid " << mid << " small " << small << "\n";
}
