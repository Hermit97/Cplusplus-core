#include <iostream>
#include <vector>

/*Implement a little guessing game called (for some obscure reason) “Bulls
and Cows.” The program has a vector of four different integers in the
range 0 to 9 (e.g., 1234 but not 1122) and it is the user’s task to discover
those numbers by repeated guesses. Say the number to be guessed is 1234
and the user guesses 1359; the response should be “1 bull and 1 cow”
because the user got one digit (1) right and in the right position (a bull)
and one digit (3) right but in the wrong position (a cow). The guessing
continues until the user gets four bulls, that is, has the four digits correct
and in the correct order.*/
int main() {
  std::vector<int> fib;
  fib.push_back(1);
  fib.push_back(2);
  std::cout << fib[fib.size() - 1]  + fib[fib.size() - 2]<< "\n";


  std::cout << "---------\n";
  while (fib[fib.size() - 1] + fib[fib.size() - 2] > fib[fib.size() - 1])
    fib.push_back(fib[fib.size() - 1] + fib[fib.size() - 2]);
  std::cout << fib[fib.size() -1] << "\n";
}
