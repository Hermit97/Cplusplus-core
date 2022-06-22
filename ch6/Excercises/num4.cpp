/*Define a class Name_value that holds a string and a value. Rework exer-
cise 19 in Chapter 4 to use a vector<Name_value> instead of two vector s.*/
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <vector>

class Name_value {
public:
  std::string names;
  int scores;
  Name_value(std::string n, int s) : names(n), scores(s) {}
};

int main() {
  std::vector<Name_value> info; // Intilized object called info from Name_value

  std::string name;
  int score;
  std::string enterName;
  bool isTrue = true;
  bool duplicate = false;
  bool nameFound = false;

  while (isTrue) {
    std::cin >> name;
    std::cin >> score;

    if (name == "Noname" && score == 0)
      break;

    for (Name_value n : info) {
      if (n.names == name || n.scores == score) {
        std::cout << "This already exists. Try again \n";
        duplicate = true;
      }
    }

    if (duplicate) {
      duplicate = false;
    } else
      info.push_back(Name_value(name, score));
  }

  std::cout << "Results: " << " ";
  for (Name_value x : info)
    std::cout << x.names << " " << x.scores << "\n";

  // Search for a name. It should print he requested name and score.
  std::cout << "Enter a name\n";
  std::cin >> enterName;
  for (Name_value x : info) {
    if (x.names == enterName) {
      nameFound = true;
      std::cout << x.names << " : " << x.scores
                << "\n"; // or just print enterName?
      break;
    } else
      nameFound = false;
  }
  if (nameFound == false)
    std::cout << "Name not found\n";
}
