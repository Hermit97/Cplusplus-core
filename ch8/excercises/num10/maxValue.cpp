/*Write a function maxv() that returns the largest element of a vector
argument.*/

#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

void printVector(std::vector<int> v) {
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << "\n";
  }
}

//find the max largest element in the vector
int findMaxValue(std::vector<int> v) {
    int maxValue;
    for(int i = 0; i < v.size(); ++i){
        for(int j = 0; j < v.size(); ++j){
            if(v[j] < v[j + 1]){
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
        maxValue = v[0];
    }
    return maxValue;
}

void setVectorValues(std::vector<int> v) {
  int number;
  for (int i = 0; i < 4; ++i) {
    if (std::cin >> number) {
      v.push_back(number);
    } else
      throw std::runtime_error("Invalid input");
  }
  printVector(v);

  std::cout << "The largest element is " << findMaxValue(v) << "\n";
}

int main() {
  try {
    std::vector<int> numbers;
    setVectorValues(numbers);
  } catch (std::exception &e) {
    std::cerr << "Error " << e.what() << "\n";
    return 1;
  }
}
