/*Write a function that given two vector<double> s price and weight com-
putes a value (an “index”) that is the sum of all price[i]*weight[i] . Make
sure to have weight.size()==price.size() .*/

#include <cstdlib>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

std::vector<double> price;
std::vector<double> weight;

const std::string wrongInput = "Invalid Input";

void error(std::string er) { std::cout << er; }

void getPrice() {
  std::string w;
  double yourWeight;
  while (yourWeight > 0) {
    if (!(std::cin >> yourWeight)) {
        if(std::cin >> w){
            if(w == "q")
                std::cout << "Quiting\n";
        }
    } else {
      weight.push_back(yourWeight);
    }
  }
}

int main() {
  try {
    getPrice();
    for (double d : weight)
      std::cout << d << "\n";
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }
}
