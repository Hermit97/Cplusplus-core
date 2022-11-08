/*Write a function that given two vector<double> s price and weight com-
putes a value (an “index”) that is the sum of all price[i]*weight[i] . Make
sure to have weight.size()==price.size() .*/

#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<double> price;
std::vector<double> weight;

void error(std::string er) { std::cout << er; }

void getPrice() {
  std::string w;
  double yourWeight;
  bool isTrue = true;
  while (isTrue == true) {
    std::cin >> w;
    if (w == "q")
      break;
    else {
      error("Invalid input\n");
      std::cout << "Try again"
                << "\n";
      break;
    }
    yourWeight = std::atoi(w.c_str());
    weight.push_back(yourWeight);
  }
}

int main() {
  try {
    getPrice();
    for (double d : weight) {
      std::cout << d << "\n";
    }

  } catch (std::exception &e) {
      std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }
}
