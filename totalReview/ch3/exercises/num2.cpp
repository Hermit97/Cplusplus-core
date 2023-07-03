#include <iostream>
#include <string>

int main(){
    double miles;
    double kilo = 1.609;
    double miles_to_kilo;

    std::cout << "Enter the amount of miles: \n";
    std::cin >> miles;

    miles_to_kilo = miles * kilo;

    std::cout << "Miles = " << miles << "\n" << "Miles to kilo is = " << miles_to_kilo << "\n";
    return 0;
}
