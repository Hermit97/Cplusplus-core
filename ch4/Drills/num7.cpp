#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>

/*Add a unit to each double entered; that is, enter values such as 10cm,
2.5in, 5ft, or 3.33m. Accept the four units: cm, m, in, ft.
Assume conversion factors 1m == 100cm, 1in == 2.54cm, 1ft == 12in. Read the unit
indicator into a string. You may consider 12 m (with a space between the
number and the unit) equivalent to 12m (without a space).Instead of trying to free style it
*/
int main(){
    double num1;
    double small = 0;
    double big = 0;
    double convert = 0;
    std::string addUnit;
    bool isTrue = true;
    bool firstNum = true;
    std::vector<std::string> units = {"cm", "in", "m", "ft"};

    std::cout << "Enter a number\n";
    while(std::cin >> num1 >> addUnit){

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
    }
    return 0;
}
