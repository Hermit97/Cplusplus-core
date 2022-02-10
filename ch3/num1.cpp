#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    double miles;
    double kilo = 1609;
    double sum = 0;

    std::cout << "Enter the amount for miles\n";
    std::cin >> miles;

    for(int i = 0; i < miles; i++){
        //keep adding the kilo till i == miles;
        sum = sum + kilo;
    }

    std::cout << "You entered " << miles << " miles " << "which is converted to " << sum << " kilos\n";



}
