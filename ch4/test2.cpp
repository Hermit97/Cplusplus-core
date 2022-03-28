#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

int main(){
    int lowerBound = 1;
    int upperBound = 100;
    int midPoint;
    int questions = 0;
    int maxQuestions = 7;
    int usrNumber;

    while(questions <= maxQuestions){
        midPoint = (upperBound + lowerBound) / 2;
        std::cout << "Is the number less than " << midPoint << "\n";
        ++questions;
        char usrAnswer;
        std::cin >> usrAnswer;
    }
}
