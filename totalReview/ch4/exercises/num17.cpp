/*Write a program where you first enter a set of name-and-value pairs, such
as Joe 17 and Barbara 22. For each pair, add the name to a vector called
names and the number to a vector called scores (in corresponding po-
sitions, so that if names[7]=="Joe" then scores[7]==17). Terminate input
with NoName 0. Check that each name is unique and terminate with an
error message if a name is entered twice. Write out all the (name,score)
pairs, one per lin*/

#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> names;
  std::vector<int> scores;
  std::string name;
  int score;
  bool still_running = true;

  while (still_running) {
    std::cin >> name;
    std::cin >> score;
    if (name == "Noname" && score == 0)
      break;

    if (names.size() == 0 && scores.size() == 0) {
      names.push_back(name);
      scores.push_back(score);
      continue;
    }

    for (int i = 0; i < names.size(); ++i) {
      if (name == names[i]) {
        std::cout << "ERROR\n";
        exit(0);
      }
      if (name != names[i]) {
        names.push_back(name);
        scores.push_back(score);
        break;
      }
    }
  }


std::cout << "Result\n";
for (int i = 0; i < names.size(); ++i) {
  std::cout << names[i] << " " << scores[i] << "\n";
}
}
