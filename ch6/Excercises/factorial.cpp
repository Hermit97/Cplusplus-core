#include <iostream>

int main(){
    int n;

    std::cout << "Enter a number\n";
    std::cin >> n;

    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = i * fact;
        std::cout << fact << "\n";
    }
}
