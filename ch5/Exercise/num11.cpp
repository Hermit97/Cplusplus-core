#include <cctype>
#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>
// The highest num for fib is
int main() {
  try {
    std::vector<int> fib;
    int num;

    fib.push_back(1);
    fib.push_back(1);

    std::cout << "Enter  number\n";
    std::cin >> num;

    for (int i = 0; i < fib.size(); i++) {
      std::cout << fib[i] << "\n";
    }

    int total = 0;
    std::cout << "----------\n";
    // Check for the largest number int can fit from fib
    for (int i = 0; i <= num; i++) {
      total = fib[i] + fib[i + 1];
      fib.push_back(total);
    }

    for (int i = 0; i < fib.size(); i++) {
      std::cout << fib[i] << "\n";
    }
  }catch(std::exception& e){
      std::cerr << "Error " << e.what() << "\n";
      return 1;
  }catch(...){
      std::cerr << "Unknown exception\n";
      return 2;
  }
}
