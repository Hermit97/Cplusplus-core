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
  bool isTrue = true;
  while (isTrue == true){
    if(std::cin >> yourWeight){
      weight.push_back(yourWeight);
    }else{
      std::cin.clear();
      std::cin >> w;
      if(w == "q")
        break;
      else{
        std::cout << wrongInput << "\n";
      }
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
