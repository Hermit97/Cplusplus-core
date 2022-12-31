/*Enter 1 number. Then compare if that number is bigger ot smaller or the same the new input. */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){

    double num1, big, small, current;
    std::string addUnit;
    bool isTrue = true;
    bool runOneTime = true;
    std::vector<std::string> units = {"cm", "m", "in", "ft"};

    while(isTrue == true){
        std::cin >> num1;
        //Run these 2 below one time to get the inital values for these 2
        while(runOneTime == true){
            small = num1;
            big = num1;
        }

        std::cout << big << " is the biggiest number so far\n";
        std::cout << small << " is the smallest number so far\n";

        if(num1 < small){
            small = num1;
            std::cout << small << " is the smallest number so far\n";
        }else if(num1 > big){
            big = num1;
            std::cout << big << " is the new biggiest number so far\n";
        }else{
            std::cout << "The number you entered is neither bigger than the biggest number or smaller than the biggest.\n";
        }
    }
    return 0;
}
