#include <iostream>
#include <vector>

class Name_value {
public:
	std::string name;
	int score;

	//constructor dec
	Name_value(const std::string name, int score);
};
//constructor init
	Name_value::Name_value(std::string name, int score) : name(name), score(score){}
  
int main() {
	int score;
	std::string name;
	Name_value person(name,score);

  std::vector<Name_value> names;
  std::vector<Name_value> scores;
  std::vector<Name_value> names_scores;

  bool still_running = true;

  while (still_running) {
    std::cin >> name;
    std::cin >> score;

    if (person.name == "Noname" && person.score == 0)
      break;

    //vector are empty proceed to push person object into names_scores
    if (names.size() == 0 && scores.size() == 0) {
		//names.push_back(person);
		//scores.push_back(person);
		names_scores.push_back(person);
		continue;
    }

    for (Name_value nv : names) {
      if (person.name == nv.name) {
        std::cout << "ERROR\n";
        exit(0);
      }
      if (person.Name_value::name != nv) {
        //names.push_back(nv);
        //scores.push_back(Name_value::score);
		names_scores.push_back(person);
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
    for (Name_value nv : names_scores) {
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
