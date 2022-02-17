#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    double yen = 0.0087;
    double euro = 1.14;
    double pound = 1.36;
    double yenToDollar, euroToDollar, poundToDollar, amount;
    std::string curr = " ";

    std::cout << "Enter the currency you want to get exchanged to usd. \n";
    std::cin >> curr;

    std::cout << "Enter the amount:\n";
    std::cin >> amount;

    if(curr == "yen" || curr == "Yen"){
        yenToDollar = yen * amount;
        std::cout << yenToDollar << "\n";
    }

}
