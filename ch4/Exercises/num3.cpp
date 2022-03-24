#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*
Write a program to play a numbers guessing game. The user thinks of a
number between 1 and 100 and your program asks questions to figure
out what the number is (e.g., “Is the number you are thinking of less than
50?”). Your program should be able to identify the number after asking
no more than seven questions. Hint: Use the < and <= operators and the
if-else construct.
*/

char checkInput(){
    char usrAnswer;

    std::cin >> usrAnswer;
    while(usrAnswer != 'y' && usrAnswer != 'Y' && usrAnswer != 'n' && usrAnswer != 'N'){
        std::cout << "Wrong input, try again.\n";
        //std::cin.clear();
        //std::cin.ignore(256, '\n');
        std::cin >> usrAnswer;
    }
    return usrAnswer;
}

int main(){
    int small = 1;
    int big = 100;
    int usrNum;
    int maxQuestions = 7;
    int count = 1;

//????    int range = big - small;

    std::cout << "Enter a number: \n";
    std::cin >> usrNum;

    //Check for invalid input
    while(std::cin.fail()){
        std::cout << "Not an int\n";
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Enter another number: \n";
        std::cin >> usrNum;
    }

    //Ask up to 7 questions
    while(count <= maxQuestions){

        //Question 1 for [51, 100]
        std::cout << "Is the number you are thinking of above 50?\n";
        if(checkInput() ==  'Y'){
            small = 51;
            big = 100;



        }



        //Question 2
        std::cout << "Is the number smaller than ";



        ++count;
    }





}
