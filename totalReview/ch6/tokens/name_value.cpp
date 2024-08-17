#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

class Name_value {
public:
  // constructor dec already delcared below
  // Name_value(const std::string name, int score);

  // constructor init
  Name_value(std::string name, int score) : name(name), score(score) {}

  void populate_vector(std::vector<Name_value> &n) { get_vector(n); }
  void clear_buffer();

  void printVector(std::vector<Name_value> n) {
    std::cout << "Printed\n";
    std::cout << "\n\n";
    for (const auto &i : n) {
      std::cout << "Name: " << i.name << "\nScore: " << i.score << "\n";
    }
    search_vector(name, score, n);
  }
  std::string get_name(std::string &name) { return name; }

  int get_score(int &score) { return score; }

private:
  std::string name;
  int score;

  void get_vector(std::vector<Name_value> &n) {
    bool still_running = true;
    std::string name;
    int score;

    while (still_running) {
      score = 0;
      std::cout << "Enter name\n";
      std::cin >> name;
      if (duplicates(name, score, n) == true) {
        continue;
      }
      if (name == "No name")
        break;

      std::cout << "Enter score\n";
      std::cin >> score;
      if (duplicates(name, score, n) == true) {
        continue;
      }
      if (score == 0)
        break;

      n.push_back(Name_value(name, score)); // push (name, score) into n vector
    }
  }

  bool duplicates(std::string name, int score, std::vector<Name_value> &n) {
    bool found_duplicate = false;
    for (const auto &i : n) {
      if (name == i.name) {
        std::cout << "Name duplicate found...removing duplicate.\n";
        return found_duplicate = true;
      }
      if (score == i.score) {
        std::cout << "Score duplicate found...removing duplicate.\n";
        return found_duplicate = true;
      }
    }
    return found_duplicate = false;
  }
  // user search name.
  void search_vector(std::string name, int score, std::vector<Name_value> &n) {
    std::cout << "Enter number and score and it will be printed along with its "
                 "palce in the vector\n";

    Name_value::clear_buffer();
    std::string user_name;

	bool done = false;
    while (done == false) {
		std::cin >> user_name;

		if(user_name == "q"){
			done = true;
			break;
		}
      for (const auto &i : n) {
        if (user_name == i.name)
          std::cout << "Match found for " << user_name << "... " << name
                    << " Score is " << i.score << "\n";
        else
          std::cout << "Match... not found\n";

      }
    }
  }
};

void Name_value::clear_buffer() {
  if (std::cin.fail()) {
    std::cin.clear(); // Clear the error state
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(),
                    '\n'); // Discard invalid input
  }

  // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

int main() {
  std::vector<Name_value> names_scores;
  Name_value person(" ", 0);

  person.populate_vector(names_scores);
  person.printVector(names_scores);
}
