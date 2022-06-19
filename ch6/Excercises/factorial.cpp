#include <iostream>

int main() {
  int number = 7;
  int fact = number - 1;
  while(fact > 0){
    number = number * fact;
    --fact;
  }

  std::cout << number << "\n";

}

  /*int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact = i * fact;
    std::cout << fact << "\n";
  }
  */
