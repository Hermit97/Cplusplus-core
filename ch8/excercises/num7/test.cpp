#include <algorithm>
#include <iostream>
#include <vector>

/*Get name and age. Then print them both side by side. Take 5 names/ages*/
std::vector<std::string> names;
std::vector<int> ages;

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
  for (int i = 0; i < 2; ++i) {
    getNames();
  }
  std::cout << "Names end\n";
}

void setUpVectorAge() {
  for (int i = 0; i < 2; ++i) {
    getAge();
  }
  std::cout << "Ages end\n";
}

void setUp() {
  setUpName();
  setUpVectorAge();
}

void printFirst() {
  //setUp();
  std::cout << "TEST\n";
  for (int i = 0; i < names.size() && ages.size(); ++i) {
    std::cout << "Names: " << names[i] << " age: " << ages[i] << "\n";
  }
}
int main() {
  setUp();
  printFirst();
}
