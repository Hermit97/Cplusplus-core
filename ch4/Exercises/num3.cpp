#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*
Write a program to play a numbers guessing game. The user thinks of a number between
1 and 100 and your program asks questions to figure out what the number is
(e.g., “Is the number you are thinking of less than
50?”). Your program should be able to identify the number after asking
no more than seven questions. Hint: Use the < and <= operators and the
if-else construct.*/



/*char answer(){
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

int userNum(){
    int usrNumber;
    std::cout << "Enter a number: \n";
    std::cin >> usrNumber;

    //Check for invalid input
    while(std::cin.fail()){
        std::cout << "Not an int\n";
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Enter another number: \n";
        std::cin >> usrNumber;
    }

    return usrNumber;
}*/

int main(){
    int lowerBound = 1;
    int upperBound = 100;
    int midPoint;
    int questions = 0;
    int maxQuestions = 7;
    int usrNumber;

    std::cout << "Enter a number\n";
    std::cin >> usrNumber;

    //Check for invalid input
    while(std::cin.fail()){
        std::cout << "Not an int\n";
        std::cin.clear();
        std::cin.ignore(256,'\n');
        std::cout << "Enter another number: \n";
        std::cin >> usrNumber;
    }


    while(questions <= maxQuestions){
        midPoint = (upperBound + lowerBound) / 2;

        std::cout << "Is the number less than " << midPoint << "\n";
        ++questions;
        char usrAnswer;

        std::cin >> usrAnswer;
        while(usrAnswer != 'y' && usrAnswer != 'Y' && usrAnswer != 'n' && usrAnswer != 'N'){
            std::cout << "Wrong input, try again.\n";
            //std::cin.clear();
            //std::cin.ignore(256, '\n');
            std::cin >> usrAnswer;
        }

        if(usrAnswer == 'Y' || usrAnswer == 'y')
           upperBound = midPoint - 1;
        else if(usrAnswer == 'N' || usrAnswer == 'n')
            lowerBound = midPoint;
        else
            std::cout << "Wrong input";

        if(usrNumber == lowerBound)
            break;
    }
    std::cout << "Number = " << lowerBound << " or " << upperBound  << "or mid " << midPoint << " it took " << questions << " questions";
}
