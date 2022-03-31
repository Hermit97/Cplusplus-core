#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int input;
  cin >> input;
  while(input > 9 || input < -9){
    std::cout << "Must be single digit, try again\n";
    std::cin >> input;
  }

  cout << "OKASAY";
}
