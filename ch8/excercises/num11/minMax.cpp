/*Write a function that finds the smallest and the largest element of a vector
argument and also computes the mean and the median. Do not use global
variables. Either return a struct containing the results or pass them back
through reference arguments. Which of the two ways of returning several
result values do you prefer and why?*/

#include <cstdlib>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

// num = atoi(n.c_str());
// v.push_back(num);

void getVector(std::vector<int> &v) {
  while (true) {
    std::string n;
    int num;
    if (std::cin >> num) {
      v.push_back(num);
    }else{
        std::cin.clear();
        std::cin >> n;
        if(n == "q")
            break;
        else
            throw std::runtime_error("Invalid");
    }
  }
}

void print(std::vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << "\n";
  }
}

int main() {
  try {
    std::vector<int> numbers;
    getVector(numbers);
    print(numbers);
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
  }
}
