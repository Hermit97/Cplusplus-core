#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    std::string num1 {0};
    std::string num2 {0};


    std::cout << "Enter two numbers\n";
    std::cin >> num1 >> num2;

    while(num1 != "|" || num2 != "|"){
        std::cout << "Enter two numbers\n";
        std::cin >> num1 ;
        if(num1 == "|" || num2 == "|")
            break;
        std::cin >> num2;

    }

}
