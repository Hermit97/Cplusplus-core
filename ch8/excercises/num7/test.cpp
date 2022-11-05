#include <algorithm>
#include <iostream>
#include <vector>

/*Get name and age. Then print them both side by side. Take 5 names/ages*/
std::vector<std::string> names;
std::vector<int> ages;
std::vector<std::string> namesCopy;
std::vector<int> ageCopy;

// Get names
std::string getNames() {
  std::string name;
  std::cin >> name;
  return name;
}

int getAge() {
  int age;
  std::cin >> age;
  return age;
}

void setUpName() {
  for (int i = 0; i < 5; ++i) {
    names.push_back(getNames());
  }
  std::cout << "Names end\n";
}

void setUpVectorAge() {
  for (int i = 0; i < 5; ++i) {
    ages.push_back(getAge());
  }
  std::cout << "Ages end\n";
}

void setUp() {
  setUpName();
  setUpVectorAge();
}

void ageMatch() {
  /*outter loop n checks if n[0] == namesCopy[0] they dont
   *then n[0] checks == namesCopy[1] they are so it pushes the i value of copy
   *which is 2 into the ageCopy vector.
   *n[0] increments and becomes n[1]
   *and checks if n[1] == nameCopy[0] it does so it pushes ages[i] which is 1 into the vector hecnce
   *getting the result we want.*/
  for (std::string n : names) {
    for (int i = 0; i < names.size(); ++i) {
      if (namesCopy[i] == n)
        ageCopy.push_back(ages[i]);
    }
  }
}

void bubbleSort() {
  namesCopy = names;
  for (int i = 0; i < names.size(); ++i) {
    for (int j = 0; j < names.size() - 1; ++j) {
      if (names[j] > names[j + 1]) {
        std::string temp = names[j];
        names[j] = names[j + 1];
        names[j + 1] = temp;
      }
    }
  }
  ageMatch();
}

void printFirst() {
  setUp();
  for (int i = 0; i < names.size(); ++i) {
    std::cout << "Names: " << names[i] << " age: " << ages[i] << "\n";
  }

  bubbleSort();
  std::cout << "size of agecopy\n";
  std::cout << ageCopy.size() << "\n";

  std::cout << "After sort\n";
  for (int i = 0; i < names.size(); ++i) {
    std::cout << "Names: " << names[i] << " age: " << ageCopy[i] << "\n";
  }
}

int main() { printFirst(); }
