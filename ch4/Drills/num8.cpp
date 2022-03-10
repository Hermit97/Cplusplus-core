#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>
/*Reject values without units or with “illegal” representations of units, such
as y, yard, meter, km, and gallons.*/
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
        while(notValid == true){
            if (addUnit == " " || addUnit == "yards" || addUnit == "y" || addUnit == "meters" || addUnit == "km" || addUnit == "gallons"){
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

            }else{
                notValid = false;
            }
        }
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
