#include <algorithm>
#include <iostream>
#include <vector>

std::vector<std::string> names;
std::vector<int> ages;

void error(std::string n) { std::cout << n << "\n"; }

void getNames(std::vector<std::string> &names) {
  std::cout << "Enter 5 names\n";
  for (int i = 0; i < 2; ++i) {
    std::string n;
    std::cin >> n;
    names.push_back(n);
  }

  std::cout << "Result\n";
  for (int i = 0; i < names.size(); ++i) {
    std::cout << names[i] << "\n";
  }
}

void getAges(std::vector<int> &ages) {
  std::cout << "Enter ages for each name\n";
  for (int i = 0; i < 2; ++i) {
    int n;
    std::cin >> n;
    ages.push_back(n);
  }

  std::cout << "Result\n";
  for (int i = 0; i < ages.size(); ++i) {
    std::cout << ages[i] << "\n";
  }
}

std::vector<std::string> nameV() {
  std::vector<std::string> names;
  return names;
}

std::vector<std::string> ageV() {
  std::vector<std::string> ages;
  return ages;
}

void sortNames() {
  getNames(names);
  std::sort(names.begin(), names.end());
}

// Check if the given string is in the vector
int find_index(std::vector<std::string> &vec, std::string &n) {
  for (int i = 0; i < vec.size(); ++i) {
    if (vec[i] == n)
      return i;
  }
  error("Value not found");
}

void sortAges() { getAges(ages); }

void printInfo() {
  getNames(names);  getAges(ages); 

  std::vector<int> a = ages;
  std::vector<std::string> n = names;
  std::sort(names.begin(), names.end());
  for (int i = 0; i < ages.size(); ++i) {
    ages[i] = a[find_index(n, names[i])];
  }
  // sortNames();
  // sortAges();
  std::cout << "Result\n";
  for (int i = 0; i < names.size() && i < ages.size(); ++i) {
    std::cout << names[i] << " : " << ages[i] << "\n";
  }
}

void getInfo() {
  getNames(names);
  getAges(ages);
}

int main() {
  // getInfo();
  printInfo();
}
