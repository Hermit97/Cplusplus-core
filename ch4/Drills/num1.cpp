#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    //std::string num1 {0};
    //std::string num2 {0};

    int num1, num2;

    std::cout << "Enter two numbers\n";

    //while(num1 != "|" || num2 != "|"){
    while(std::cin >> num1 >> num2){
       std::cout << "Num1: " << num1 << "\n num2: " << num2 << "\n";
    }
    return 0;

}
