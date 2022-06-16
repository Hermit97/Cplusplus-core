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

/*Modify the program from exercise 19 so that when you enter an integer,
the program will output all the names with that score or score not found .*/

int main() {
  std::vector<std::string> names;
  std::vector<int> scores;
  std::string enterName;
  int checkNum;
  bool isTrue = true;
  bool nameFound;
  bool scoreFound;
  int i, j;

  while (isTrue) {
    std::string name;
    int score;

    std::cin >> name;
    std::cin >> score;

    // Check for same entries for names vector
    for (int i = 0; i < names.size() && i < scores.size(); i++) {
      if (name == names[i] && score == scores[i]) {
        std::cout << "This already exists. Try again.\n";
      }
    }

    if (name == "NoName" && score == 0) {
      isTrue = false;
      break;
    }

    names.push_back(name);
    scores.push_back(score);
  }

  std::cout << "Result:\n";
  for (int i = 0; i < names.size() && i < scores.size(); i++) {
    std::cout << names[i];
    std::cout << " " << scores[i] << "\n";
  }

  std::cout << "\n\n";

  std::cout << "Enter a name to get the correspoinding score\n";
  std::cin >> enterName;

  // Maybe use a inner loop to check each of the names.
  for (int i = 0; i < names.size(); i++) {
    if (enterName != names[i]) {
      nameFound = false;
    } else if (enterName == names[i]) {
      std::cout << scores[i] << "\n";
      nameFound = true;
      break;
    }
  }

  if (nameFound == false)
    std::cout << "Name not found\n";

  /*Modify the program from exercise 19 so that when you enter an integer,
  the program will output all the names with that score or score not found .*/
  std::cout << "Enter an integer: \n";
  std::cin >> checkNum;

  for (int i = 0; i < scores.size(); i++) {
    if (checkNum != scores[i]) {
      scoreFound = false;
    } else if (checkNum == scores[i]) {
      std::cout << names[i] << "\n";
      scoreFound = true;
      break;
    }
  }

  if (scoreFound == false) {
    std::cout << "Score not found.\n";
  }
}
