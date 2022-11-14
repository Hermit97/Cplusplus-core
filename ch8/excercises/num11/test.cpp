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

void printVector(std::vector<int> v) {
  std::cout << "Vector:\n";
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << "\n";
  }
}

void findMin(std::vector<int> v) {
  int minValue;
  for (int i = 0; i < v.size(); ++i) {
    for (int j = 0; j < v.size() - 1; ++j) {
      if (v[j] > v[j + 1]) {
        int temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
      }
    }
    minValue = v[0];
  }
  printVector(v);
  std::cout << "The min value is " << minValue << "\n";
}
void getVector(std::vector<int> v) {
  int num;
  for(int i = 0; i < 4; ++i) {
    if (std::cin >> num) {
      v.push_back(num);
    }
  }
  findMin(v);
}

int main() {
    std::vector<int> numbers;
    getVector(numbers);
}
