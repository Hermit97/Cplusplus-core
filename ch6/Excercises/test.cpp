#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <set>
#include <string>
#include <sys/types.h>
#include <system_error>
#include <vector>

/*Modify the program from exercise 19 so that when you enter a name, the
  program will output the corresponding score or name not found .*/

int main() {
  std::vector<std::string> names;
  std::vector<int> scores;
  std::string enterName;
  bool duplicate = true;
  bool repeat = false;
  bool nameFound;
  bool end = false;
  int i, j;

  std::string name;
  int score;

  while (duplicate == true) {std::cin >> name;
     std::cin >> score;

    // Exit while loop
    if (name == "Noname" && score == 0) {
      // end = true;
      duplicate = false;
      break;
    }

    // Check for same entries for names vector
    /*for (int i = 0; i < names.size() && i < scores.size(); i++) {
      if (name == names[i] && score == scores[i]) {
        std::cout << "This already exists. Try again.\n";
        repeat = true;
      }
    }
    */

    if(repeat == true){
       repeat = false;
    }else{
        names.push_back(name);
        scores.push_back(score);
    }
  }

  std::cout << "Result:\n";
  for (int i = 0; i < names.size() && i < scores.size(); i++) {
    std::cout << names[i];
    std::cout << " " << scores[i] << "\n";
  }


}
