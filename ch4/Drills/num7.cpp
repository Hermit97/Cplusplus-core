#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>

//Combine all of the problems. Also do the same for
//Also for number 7 do actual research on the conversoin instead of trying to free style it
int main(){

    double num1, big, small, current;
    std::string addUnit;
    bool isTrue = true;
    bool firstNum = true;
    std::vector<std::string> units = {"cm", "m", "in", "ft"};

    //How to stop the program? with | or something else but rather |??
    //Need input to end once num1 enters 0 instead of asking for addUnit input
    while(isTrue == true){
        //first num is false after its entered
        if(firstNum == true){
            std::cout << "Enter a number\n";
            std::cin >> num1 >> addUnit;
            small = num1;
            big = num1;
            std::cout << big << " is the biggiest number so far\n";
            std::cout << small << " is the smallest number so far\n";
            firstNum = false;
        }

        std::cout << "First num is now false\n";

        //Exit the program??
        if(num1 == 0){
            exit(0);
        }

        std::cout << "Enter a number\n";
        std::cin >> num1 >> addUnit;
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
