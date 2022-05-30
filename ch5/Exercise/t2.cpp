#include <cctype>
#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  std::vector<int> fib;
  fib.push_back(1);
  fib.push_back(2);
  //std::cout << fib[fib.size() - 1]  + fib[fib.size() - 2]<< "\n";
  std::cout << fib[fib.size() - 1] << "\n";


  std::cout << "---------\n";

  /*This while loop takes the size of fib vector and -1 and adds it to it self again but this time - 2 instead of 1
   *then checks if the result whijch is 3 is bigger than fib size - 1 which is 2
   *it then keeps pushing the size into the vector till the int type vector cant hold anymore*/
  while (fib[fib.size() - 1] + fib[fib.size() - 2] > fib[fib.size() - 1])
    fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
  std::cout << fib[fib.size() -1] << "\n";
}
