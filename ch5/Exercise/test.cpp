#include <cctype>
#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> v1;
  std::vector<int> v2;

  v1.push_back(1);
  v1.push_back(2);
  v1.push_back(3);

  std::cout << "v1 vector: \n";
  for (int i = 0; i < v1.size(); i++) {
    std::cout << v1[i] << "\n";
  }

  std::cout << "-------------\n";

  for (int n; std::cin >> n;)
    v2.push_back(n);

  std::cout << "-------------\n";

  std::cout << "v2 vector: \n";
  for (int i = 0; i < v2.size(); i++) {
    std::cout << v2[i] << "\n";
  }

  // check if v2 elements match any of the v1 elements
  int bull = 0;
  int cow = 0;
  for (int i = 0; i < v2.size(); ++i) {
    for(int j = 0; j < v1.size(); ++j){
      if(v2[i] == v1[j])
        ++bull;
      else{
        ++cow;
      }
    }
  }

  std::cout << "Bulls: " << bull << "\n";
  std::cout << "Cows: " << cow << "\n";
}
