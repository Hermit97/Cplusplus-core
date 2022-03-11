#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>
/* Keep track of the sum of values entered (as well as the smallest and the
largest) and the number of values entered. When the loop ends, print the
smallest, the largest, the number of values, and the sum of values. Note
that to keep the sum, you have to decide on a unit to use for that sum; use
meters.
*/

int main(){
    double num1;
    double small = 0;
    double big = 0;
    double convert = 0;
    std::string addUnit;
    bool isTrue = true;
    bool firstNum = true;
    bool notValid = true;
    int exitProgram {'|'};
    std::vector<std::string> units = {"cm", "in", "m", "ft"};

    std::cout << "Enter a number\n";
    while(std::cin >> num1 >> addUnit){

        //Check for invalid inputs
        if(notValid == true){
            std::cout << "Illegal units input\n";

            //Ask for input again
            std::cout << "Enter input again\n";

            std::cin >> num1;
            std::cin.clear(); // Test this!!!

            if(num1 == exitProgram){
                exit(0);
            }

            std:: cin >> addUnit;
            if(addUnit == "|")
                exit(0);

    }else
        notValid = false;

        //Convert cm to meters
        if(addUnit == units[0]){
            convert = num1 / 100;
            std::cout << num1 << units[0]  << " converted to "<< convert << "m\n";

            //Convert in to cm
        }else if(addUnit == units[1]){
            convert = num1 * 2.54;
            std::cout << num1 << units[1] << " converted to "<< convert << "cm\n";
            //Convert m to ft
        }else if(addUnit == units[2]){
            convert = num1 * 3.281;
            std::cout << num1 << units[2] << " converted to "<< convert << "ft\n";
            //Convert ft to in
        }else if(addUnit == units[3]){
            convert = num1 * 12;
            std::cout << num1 << units[3] << " converted to "<< convert << "in\n";
        }

        if(firstNum){
            small = num1;
            big = num1;
            std::cout << small << " is the smallest number so far\n";
            firstNum = false;
        }else if(num1 < small){
                small = num1;
                std::cout << small << " is the smallest number so far\n";
            }else if(num1 > big){
                big = num1;
                std::cout << big << " is the new biggiest number so far\n";
            }else{
                std::cout << "The number you entered is neither bigger than the biggest number or smaller than the biggest.\n";
            }
        //Reset not valid for the next iteration
        notValid = true;
    }
    return 0;
}
