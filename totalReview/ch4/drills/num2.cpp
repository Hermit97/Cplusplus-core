#include <iostream>
#include <vector>

int main(){
    int num1, num2;
    while(std::cin >> num1 >> num2){
        std::cout << num1 << "," << num2 << "\n";

    if(num1 > num2)
        std::cout << "num1 is bigger and num2 is smaller" << "\n";
    if(num1 < num2)
        std::cout << "num2 is bigger and num1 is smaller" << "\n";
    }
    return 0;
}
