#include <cctype>
#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> fib;
  int num;

  fib.push_back(1);
  fib.push_back(1);


  std::cout << "Enter  number\n";
  std::cin >> num;

  for(int i = 0; i < fib.size(); i++){
    std::cout << fib[i] << "\n";
  }

  int total = 0;
  std::cout << "----------\n";
  for(int i = 0; i <= num; i++){
    total = fib[i] + fib[i + 1];
    //total = fib[0] + fib[1];
    fib.push_back(total);
  }

  for(int i = 0; i < fib.size(); i++){
    std::cout << fib[i] << "\n";
  }

  //find the biggest fib
  std::cout << "The biggest fib is \n";
  while(fib[fib.size() - 1] + fib[fib.size() - 2] > fib[fib.size() - 1])
    fib.push_back(fib[fib.size()-1] + fib[fib.size()-2]);
  std::cout << fib[fib.size() - 1] << "\n";
}
