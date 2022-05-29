#include <cctype>
#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  int num;
  int num2;
  std::vector<int> nums;

  if(std::cin >> num && std::isspace(std::cin.peek() ))
    return num;

  std::cout << "Not an int\n";
}
