#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include <sys/types.h>
#include <system_error>
#include <vector>

/*Write a program where you first enter a set of name-and-value pairs, such
as Joe 17 and Barbara 22 . For each pair, add the name to a vector called
names and the number to a vector called scores (in corresponding po-
sitions, so that if names[7]=="Joe" then scores[7]==17 ). Terminate input
with NoName 0 . Check that each name is unique and terminate with an
error message if a name is entered twice. Write out all the (name,score)
pairs, one per line.*/


int main(){
    std::vector<std::string> names;
    std::vector<int> scores;
    bool isTrue = true;
    int i, j;

    while(isTrue){
        std::string name;
        int score;

        std::cin >> name;
        std::cin >> score;
        if(name == "NoName" && score == 0){
            isTrue = false;;
            break;
        }

        names.push_back(name);
        scores.push_back(score);
    }

    for(int  i = 0; i < names.size() && i < scores.size(); i++){
        std::cout << names[i];
        std::cout << " " << scores[j] << "\n";
    }

    //Check for same entries for names vector
    for(int i = 0; i < names.size(); i++){
        if(names[i] == names[i + 1]){
        }
    }
}
