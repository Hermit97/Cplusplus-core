/*Write a function that finds the smallest and the largest element of a vector
argument and also computes the mean and the median. Do not use global
variables. Either return a struct containing the results or pass them back
through reference arguments. Which of the two ways of returning several
result values do you prefer and why?*/

/*I perfer the reference arguments because I dont have to worry about introducing bugs by making to many
 *copies of the arguments and confusing my self creating speghetti code. The reference arguemnts it easier
 *since im just referencing the memoroy location of the arguemnt instead of using copies of it. */

#include <algorithm>
#include <cstddef>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>
void getVector(std::vector<int> &v) {
  while (true) {
    std::string n;
    int num;
    if (std::cin >> num) {
      v.push_back(num);
    } else {
      std::cin.clear();
      std::cin >> n;
      if (n == "q")
        break;
      else
        throw std::runtime_error("Invalid");
    }
  }
}

void copyOfVector(std::vector<int> &v, std::vector<double> &copy) {
  for (int i = 0; i < v.size(); ++i) {
    copy.push_back(v[i]);
  }
}

void print(std::vector<int> &v) {
  for (int i = 0; i < v.size(); ++i) {
    std::cout << v[i] << "\n";
  }
}

int findMin(std::vector<int> &v) {
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
  return minValue;
}

int findMax(std::vector<int> &v) {
  int maxValue;
  for (int i = 0; i < v.size(); ++i) {
    for (int j = 0; j < v.size() - 1; ++j) {
      if (v[j] < v[j + 1]) {
        int temp = v[j];
        v[j] = v[j + 1];
        v[j + 1] = temp;
      }
    }
    maxValue = v[0];
  }
  return maxValue;
}

double findMean(std::vector<int> v) {
  int sum = 0;
  int size;
  double mean;
  for (int i = 0; i < v.size(); ++i) {
    sum = sum + v[i];
  }
  size = v.size();
  mean = sum / size;
  return mean;
}

double findMedian(std::vector<double> copy) {
  // first sort the copy
  std::sort(copy.begin(), copy.end());
  size_t size = copy.size();

  if (size % 2 == 0) {
    //study these 2 below and the results
    //return (copy[size / 2 - 1] + copy[size / 2]) / 2;
    return (copy[size / 2] + copy[size / 2 + 1]) / 2;
  } else
    return copy[size / 2];
}

void printInfo(std::vector<int> &v) {
  std::cout << "The min value is " << findMin(v) << "\n";
  std::cout << "The max value is " << findMax(v) << "\n";
  std::cout << "The mean value is " << findMean(v) << "\n";
}

int main() {
  try {
    std::vector<int> numbers;
    std::vector<double> copy;
    getVector(numbers);
    copyOfVector(numbers, copy);
    print(numbers);
    printInfo(numbers);

    std::cout << "The copy is "
              << "\n";
    for (int i = 0; i < copy.size(); ++i) {
      std::cout << copy[i] << "\n";
    }
    std::cout << "The median is " << findMedian(copy) << "\n";
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
  }
}
