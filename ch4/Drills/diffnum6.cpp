/*Enter 1 number. Then compare if that number is bigger ot smaller or the same the new input. */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){

    double num1, num2, big, small;
    std::string addUnit;
    bool isTrue = true;
    bool runOneTime = true;
    std::vector<std::string> units = {"cm", "m", "in", "ft"};

    //Change it to test for 2 inputs
    while(isTrue == true){
        std::cin >> num1 >> num2;

        if(!std::cin)
            break;

        if(num1 > num2){
            big = num1;
            small = num2;
            std::cout << "Num1 is bigger than num2\n";
        }else if(num1 < num2){
            big = num2;
            small = num1;
            std::cout << "Num1 is smaller than num2\n";
        }else
            std::cout << "They are equal\n";
    }
    return 0;
}
