#include <iostream>
#include <string>

int main() {
  std::string num1, num2, num3, small, mid, large;

  std::cout << "Enter 3 words \n";
  std::cin >> num1 >> num2 >> num3;

  if (num1 > num2 && num1 > num3 && num2 > num3 && num3 < num2 && num3 < num1) {
    large = num1;
    mid = num2;
    small = num3;
    std::cout << "HI\n";
  }

  if (num2 > num1 && num2 > num3 && num3 > num1 && num1 < num2 && num1 < num3) {
    large = num2;
    mid = num3;
    small = num1;
  }

  if (num3 > num1 && num3 > num2 && num1 > num2 && num2 < num1 && num2 < num1) {
    large = num3;
    mid = num1;
    small = num2;
  }

  if (num2 > num1 && num2 > num3 && num1 > num3 && num3 < num2 && num3 < num1) {
    large = num2;
    mid = num1;
    small = num3;
  }

  std::cout << "Large = " << large << " mid = " << mid << " small = " << small;

}
