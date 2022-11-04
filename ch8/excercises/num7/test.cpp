#include <algorithm>
#include <iostream>
#include <vector>

/*Get name and age. Then print them both side by side. Take 5 names/ages*/
std::vector<std::string> names;
std::vector<int> ages;
std::string name;
std::vector<std::string> namesCopy = names;
std::vector<int> ageCopy = ages;

// Get names
std::string getNames() {
  std::cin >> name;
  return name;
}

int getAge() {
  int age;
  std::cin >> age;
  return age;
}

void setUpName() {
  for (int i = 0; i < 2; ++i) {
    names.push_back(getNames());
  }
  std::cout << "Names end\n";
}

void setUpVectorAge() {
  for (int i = 0; i < 2; ++i) {
    ages.push_back(getAge());
  }
  std::cout << "Ages end\n";
}

void setUp() {
  setUpName();
  setUpVectorAge();
}

/*std::vector<std::string> nameCopy() {
  std::vector<std::string> namesCopy = names;
  return namesCopy;
  }*/

/*std::vector<int> agesCopy() {
  std::vector<int> ageCopy = ages;
  return ageCopy;
  }*/

void ageMatch() {
  // agesCopy();
  for (std::string n : names) {
    for (int i = 0; i < namesCopy.size(); ++i) {
      if (namesCopy[i] == n)
        ageCopy.push_back(ages[i]);
    }
  }
}

void bubbleSort() {
  for (int i = 0; i < names.size(); ++i) {
    for (int j = 0; j < names.size() - 1; ++j) {
      if (names[j] > names[j + 1]) {
        std::string temp = names[j];
        names[j] = names[j + 1];
        names[j + 1] = temp;
      }
    }
  }
}

void printFirst() {
  setUp();
  for (int i = 0; i < names.size(); ++i) {
    std::cout << "Names: " << names[i] << " age: " << ages[i] << "\n";
  }

  bubbleSort();
  ageMatch();
  std::cout << "After sort\n";
  for (int i = 0; i < 5; ++i) {
      //std::cout << "Names: " << namesCopy[i] << " age: " << ageCopy[i] << "\n";
      std::cout << "hi\n";
  }
}

int main() { printFirst(); }
