#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    float yen = 0.0087;
    double euro = 1.14;
    double pound = 1.36;
    float yenToDollar, euroToDollar, poundToDollar, amount;
    std::string curr = " ";

    std::cout << "Enter the currency you want to get exchanged to usd. \n";
    std::cin >> curr;

    std::cout << "Enter the amount:\n";
    std::cin >> amount;

    if(curr == "yen" || curr == "Yen"){
        yenToDollar = yen * amount;
        std::cout << yenToDollar << "\n";
    }else if(curr == "euro" || curr == "Euro"){
        euroToDollar = euro * amount;
        std::cout << euroToDollar << "\n";
    }else if(curr == "pound" || curr == "Pound"){
        poundToDollar = pound * amount;
        std::cout << poundToDollar << "\n";
    }

    return 0;

}
