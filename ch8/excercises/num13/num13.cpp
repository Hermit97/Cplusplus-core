/*Write a function that takes a vector<string> argument and returns a
vector<int> containing the number of characters in each string . Also
find the longest and the shortest string and the lexicographically first and
last string . How many separate functions would you use for these tasks?
Why?*/

#include <iostream>
#include <vector>

void getStringVector(std::vector<std::string> &v) {
  std::string input;
  for (int i = 0; i < 4; ++i) {
    std::cin >> input;
    if (input == "q")
      return;
    v.push_back(input);
  }
}

void getVectorCharacterSize(std::vector<std::string> &v,
                            std::vector<int> &c) {
  int s;
  for (int i = 0; i < v.size(); ++i) {
      s = v[i].size();
      c.push_back(s);
  }
}

std::string getLargestString(std::vector<std::string> &v){
  int iSize, jSize;
  std::string longest;
  for(int i = 0; i < v.size(); ++i){
    for(int j = 0; j < v.size(); ++j){
      iSize = v[i].size();
      jSize = v[j].size();
      if(v[i].size() > v[j].size()){
        std::string temp = v[i];
        v[i] = v[j];
        v[j] = temp;

      }
    }
    longest = v[0];
  }
  return longest;
}

std::string getSmallestString(std::vector<std::string> &v){
  int iSize, jSize;
  std::string smallest;
  for(int i = 0; i < v.size(); ++i){
    for(int j = 0; j < v.size(); ++j){
      iSize = v[i].size();
      jSize = v[j].size();
      if(v[i].size() < v[j].size()){
        std::string temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
    smallest = v[0];
  }
  return smallest;
}

void getSmallest(std::vector<std::string> &v){
  for(int i = 0; i < v.size(); ++i){
    for(int j = 0; j < v.size(); ++j){
      if(v[i] < v[j]){
        std::string temp = v[i];
        v[i] = v[j];
        v[j] = temp;
      }
    }
  }
}

int main() {
  std::vector<std::string> numbers;
  std::vector<int> characters;

  getStringVector(numbers);
  getVectorCharacterSize(numbers,characters);

  std::cout << "The sizes are \n";
  for(int s : characters)
    std::cout << s << "\n";

  std::cout << "The biggest string is  : ";
  std::cout << getLargestString(numbers) << "\n";

  std::cout << "The smallest string is : ";
  std::cout << getSmallestString(numbers) << "\n";

  std::cout << "The vector greatest to least\n";
  getSmallest(numbers);
  for(std::string a : numbers)
    std::cout << a << "\n";


}
