/*Write a function that given two vector<double> s price and weight com-
putes a value (an “index”) that is the sum of all price[i]*weight[i] . Make
sure to have weight.size()==price.size() .*/

#include <cstdlib>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

const std::string wrongInput = "Invalid Input";
const std::string notEqual = "Vectors are not equal";

void error(std::string er) { std::cout << er << "\n"; }

void getWeight(std::vector<double> &weight) {
  std::string w;
  double yourWeight;
  bool isTrue = true;
  while (isTrue == true) {
    if (std::cin >> yourWeight) {
      weight.push_back(yourWeight);
    } else {
      std::cin.clear();
      std::cin >> w;
      if (w == "q")
        break;
      else {
        std::cout << wrongInput << "\n";
      }
    }
  }
}

void getPrice(std::vector<double> &price) {
  std::string w;
  double yourPrice;
  bool isTrue = true;
  while (isTrue == true) {
    if (std::cin >> yourPrice) {
      price.push_back(yourPrice);
    } else {
      std::cin.clear();
      std::cin >> w;
      if (w == "q")
        break;
      else {
        error(wrongInput);
      }
    }
  }
}

void equalSize(std::vector<double> &w, std::vector<double> &p) {
  if(w.size() != p.size())
    throw std::runtime_error(notEqual);
}

int main() {
  try {
    std::vector<double> weight;
    std::vector<double> price;
    getWeight(weight);
    std::cout << "Weights: \n";
    getPrice(price);
    std::cout << "Weights: \n";
    for (double d : weight)
      std::cout << d << "\n";
    std::cout << "Prices: \n";
    for (double p : price)
      std::cout << p << "\n";

    equalSize(weight,price);
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }
}
