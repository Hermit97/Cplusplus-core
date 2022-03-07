#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>

//Combine all of the problems. Also do the same for
//Also for number 7 do actual research on the conversoin instead of trying to free style it
int main(){

    double num1;
    double small = 0;
    double big = 0;
    std::string addUnit;
    bool isTrue = true;
    bool firstNum = true;
    std::vector<std::string> units = {"cm", "m", "in", "ft"};

    //How to stop the program? with | or something else but rather |??
    //Need input to end once num1 enters 0 instead of asking for addUnit input
    std::cout << "Enter a number\n";
    while(std::cin >> num1){

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
