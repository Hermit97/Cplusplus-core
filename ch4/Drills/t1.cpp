#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

int main(){
    std::vector<std::string> units;
    std::string user;
    units.push_back("CM");
    units.push_back("FT");
    units.push_back("IN");
    std::cout << units[0] << "\n";
    std::cout << units[1] << "\n";
    std::cout << units[2] << "\n";
    std::cout << std::endl;
    std::cin >> user;

    if(user != units[0] && user != units[1] && user != units[2]){
        std::cout << "The input does not equal the element 0 in units\n";
    }else {
        std::cout << "IT is equal\n";
    }
}
