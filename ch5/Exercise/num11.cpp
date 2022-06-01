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
    int num1 = 1;
    int num2 = 1;

    fib.push_back(num1);
    fib.push_back(num1);

    std::cout << "Enter  number\n";
    std::cin >> num;

    for (int i = 0; i < fib.size(); i++) {
      std::cout << fib[i] << "\n";
    }

    int total = 0;
    // Check for the largest number int can fit from fib
    for (int i = 0; i <= num; i++) {
      total = fib[i] + fib[i + 1];

     if(total < num1)
        throw std::runtime_error("Cant fit anymore in an int");

      fib.push_back(total);
      std::cout << total << "\n";
    }
  }catch(std::exception& e){
      std::cerr << "Error " << e.what() << "\n";
      return 1;
  }catch(...){
      std::cerr << "Unknown exception\n";
      return 2;
  }
}
