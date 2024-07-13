#include <iostream>
#include <vector>

class Name_value {
public:
  // constructor dec already delcared below
  //Name_value(const std::string name, int score);

  // constructor init
  Name_value(std::string name, int score)
      : name(name), score(score) {}

	void populate_vector(std::vector<Name_value>& n){
		get_vector(n);
	}

	void printVector(std::vector<Name_value> n){
		std::cout << "Printed\n";
		for(const auto& i : n){
			std::cout << "Name: " << i.name << "\nScore: " <<  i.score << "\n";
		}
	}

private:
	std::string name;
	int score;

void get_vector(std::vector<Name_value>& n){
	bool still_running = true;
	std::string name;
	int score;

	while (still_running) {

		std::cout << "Enter name\n";
		std::cin >> name;
		if(name == "No name")
			break;

		std::cout << "Enter score\n";
		std::cin >> score;
		if(score == 0)
			break;


		n.push_back(Name_value(name, score)); //push (name, score) into n vector
	}
}

	void duplicates(std::vector<Name_value> n){
		for(const auto& i : n){
			//how to compare the two without using the classic for loop	
		}
	}


};

int main() {
  std::vector<Name_value> names_scores;
  Name_value person(" ", 0);

  person.populate_vector(names_scores);
  person.printVector(names_scores);
  
}








  
	//int score;
	//std::string name;
	//Name_value person(name, score);
	/*

  std::vector<Name_value> names_scores;

  bool still_running = true;

  while (still_running) {
    std::cin >> name;
    std::cin >> score;

    if (name == "Noname" && score == 0)
      break;

    // vector are empty proceed to push person object into names_scores
    if (names.size() == 0 && scores.size() == 0) {
      // names.push_back(person);
      // scores.push_back(person);
      names_scores.push_back(person);
      continue;
    }

    for (Name_value nv : ) {
      if (person.name == nv.name) {
        std::cout << "ERROR\n";
        exit(0);
      }
      if (person.Name_value::name != nv) {
        // names.push_back(nv);
        // scores.push_back(Name_value::score);
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
      if (user == person.score) { // might be wrong
        std::cout << "Found match! You entered " << user << " name is "
                  << person.name << "\n"; // might be wrong too
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
	*/

