#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    int num;

    std::cout << "Enter a number\n";
    std::cin >> num;
    bool isEven;
    bool isOdd;

    if(num % 2 == 0){
        std::cout << "Even\n";
    }else if(num % 2 >= 0){
        std::cout << "Odd\n";
    }
}
