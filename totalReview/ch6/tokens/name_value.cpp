#include <iostream>
#include <vector>

class Name_value {
public:
  static std::string name;
  static int score;
};
  
int main() {
 //Name_value person;
  std::vector<Name_value> names;
  std::vector<Name_value> scores;
  bool still_running = true;

  while (still_running) {
    std::cin >> person.Name_value::name;
    std::cin >> person.Name_value::score;
    if (name == "Noname" && score == 0)
      break;

    if (names.size() == 0 && scores.size() == 0) {
      names.push_back(name);
      scores.push_back(score);
      continue;
    }

    for (int i = 0; i < names.size(); ++i) {
      if (Name_value::name == names[i]) {
        std::cout << "ERROR\n";
        exit(0);
      }
      if (Name_value::name != names[i]) {
        names.push_back(Name_value::name);
        scores.push_back(Name_value::score);
        break;
      }
    }
  }

  std::cout << "Enter a score and its number will be printed\n";
  int user;
  bool found = true;
  while (std::cin >> user) {
    if (user == 0)
      break;
    for (int i = 0; i < scores.size(); ++i) {
      if (user == scores[i]) {
        std::cout << "Found match! You entered " << user << " name is "
                  << names[i] << "\n";
        std::cout << "Enter a number and its name will be printed\n";
        found = true;
        break;
      } else
        found = false;
    }
    if (!found) {
      std::cout << "Not found\n";
      std::cout << "Enter a number and its name will be printed\n";
    }
  }

  std::cout << "Result\n";
  for (int i = 0; i < names.size(); ++i) {
    std::cout << names[i] << " " << scores[i] << "\n";
  }
}
