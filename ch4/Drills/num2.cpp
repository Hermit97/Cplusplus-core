#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){

    int num1, num2;
    std::cout << "Enter two numbers\n"; while(std::cin >> num1 >> num2){std::cout << "Num1: "
              << num1 << "\n num2:" << num2 << "\n";
       if(num1 > num2){
           std::cout << "Num1: " << num1 << " is bigger "
                     << "Num2 is smaller\n";
       }else {
           std::cout << "Num2: " << num2 << " is bigger "
                     << "Num1 is smaller\n";
       }
    }
    return 0;
}
