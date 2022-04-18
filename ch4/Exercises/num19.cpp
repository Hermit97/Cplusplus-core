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

/*Modify the program from exercise 19 so that when you enter a name, the
  program will output the corresponding score or name not found .*/

int main(){
    std::vector<std::string> names;
    std::vector<int> scores;
    std::string enterName;
    bool isTrue = true;
    int i, j;

    while(isTrue){
        std::string name;
        int score;

        std::cin >> name;
        std::cin >> score;


        //Check for same entries for names vector
        for(int i = 0; i < names.size() && i < scores.size(); i++){
            if(name == names[i] && score == scores[i]){
              std::cout << "This already exists. Try again.\n";

            }
        }

        if(name == "NoName" && score == 0){
            isTrue = false;;
            break;
        }

        names.push_back(name);
        scores.push_back(score);
    }

    std::cout << "Result:\n";
    for(int  i = 0; i < names.size() && i < scores.size(); i++){
        std::cout << names[i];
        std::cout << " " << scores[j] << "\n";
    }

    //Check for same entries for names vector
    /*for(int i = 0; i < names.size(); i++){
        if(names[i] == names[i + 1]){
        }
    }
    */

/*Modify the program from exercise 19 so that when you enter a name, the
  program will output the corresponding score or name not found .*/

    std::cout << "\n\n";

    std::cout << "Enter a name to get the correspoinding score\n";
    std::cin >> enterName;

    //Maybe use a inner loop to check each of the names.
    for(int i = 0; i < names.size() && i < scores.size(); i++){
      if(enterName == names[i]){
	std::cout << scores[i] << "\n";
      }else{
	std::cout << "Score or name not found\n";
      }
    }
}
