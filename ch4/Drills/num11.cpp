#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

int main(){
    double convert = 0;
    double num1;
    double small = 0;
    double big = 0;
    std::string addUnit;
    bool isTrue = true;
    bool firstNum = true;
    bool notValid = true;
    int exitProgram {'|'};
    int sum = 0;
    int numEntered = 0;
    std::vector<std::string> units = {"cm", "in", "m", "ft"};

    std::vector<double> mUnits;

    std::cout << "Enter a number\n";
    while(std::cin >> num1 >> addUnit){

        //Check for invalid inputs
        while(notValid == true){
            if (addUnit != units[0] && addUnit != units[1] && addUnit != units[2] && addUnit != units[3]) {

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
        }

        //Convert cm to meters
        if(addUnit == units[0]){
            convert = num1 / 100;
            std::cout << num1 << units[0]  << " converted to "<< convert << "m\n";
            mUnits.push_back(convert);

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

        //Number of inputs
        numEntered++;

        //Sum of the inputs only for meters
        if(addUnit ==  "m"){
            sum = num1 + sum;

        }

        //Reset not valid for the next iteration
        notValid = true;
}

//Number 11
//Sort the new vector
    //Print the tracked number of inputs
    std::cout << "Number of inputs entered " << numEntered << "\n";

    //Print the sum of the inputs
    std::cout << "Sum of inputs entered " << sum << "\n";

    std::cout << "The smallest value is: " << small << "\n"
              << "The biggiest value is " << big << "\n";

    //Print out the new vector
    std::cout << "M vector values: ";
    for(int i = 0; i < mUnits.size(); i++){
        std::cout << mUnits[i] << " ";
    }

    std::cout << std::endl;

    std::sort(mUnits.begin(), mUnits.end());

    std::cout << "This is the new vector sorted\n";
    std::cout << "M vector values sorted: ";
    for(int i = 0; i < mUnits.size(); i++){
        std::cout << mUnits[i] << " ";
    }

    return 0;
}
