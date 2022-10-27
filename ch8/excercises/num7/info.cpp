#include <iostream>
#include <vector>
#include <algorithm>

std::vector<std::string> names;
std::vector<int> ages;

void getNames(std::vector<std::string> &names) {
  std::cout << "Enter 5 names\n";
  for (int i = 0; i < 2; ++i) {
    std::string n;
    std::cin >> n;
    names.push_back(n);
  }

  std::cout << "Result\n";
  for(int i = 0; i < names.size(); ++i){
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
  for(int i = 0; i < ages.size(); ++i){
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

void sortInfo(){
    getNames(names);
    getAges(ages);
    std::sort(names.begin(), names.end());
    std::sort(ages.begin(), ages.end());
}

void printInfo(){
    sortInfo();
    std::cout << "Result\n";
    for(int i = 0; i < names.size() && i < ages.size(); ++i){
	std::cout << names[i] << " : " << ages[i] << "\n";
    }
}

void getInfo() {
  getNames(names);
  getAges(ages);

}

int main(){
    //getInfo();
    printInfo();
    
}
