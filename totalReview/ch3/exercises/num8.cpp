#include <iostream>

int main(){
    int num, odd, even;
    std::cout << "Enter a number\n";
    std::cin >> num;

    if(num % 2 == 0)
      std::cout << "Even\n";
    else
        std::cout << "Odd\n";
}
