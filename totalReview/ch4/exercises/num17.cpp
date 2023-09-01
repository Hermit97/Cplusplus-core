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

  while (std::cin >> name >> score) {
      if(name == "Noname" && score == 0)
          break;
    if (name.size() < 1 && scores.size() < 1) {
      names.push_back(name);
      scores.push_back(score);
    }
    for (int i = 0; i < names.size(); ++i) {
      for (int j = 0; j < names.size(); ++j) {
        if (name == names[j] || score == scores[j]) {
          std::cout << "ERROR\n";
          exit(0);
        } else {
          names.push_back(name);
          scores.push_back(score);
        }
      }
    }
  }
  std::cout << "Result\n";
  for(int i = 0; i < names.size(); ++i){
      std::cout << names[i] << " " << scores[i] << "\n";
  }
}
