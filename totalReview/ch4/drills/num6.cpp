#include <iostream>
#include <vector>

bool almost_equal(double num1, double num2, double temp) {
  double diff = num1 - num2;

  if (diff < temp)
    diff = -diff;

  return diff < temp;
}
int main() {
  double num, largest, smallest;
  bool first = true;
  while (std::cin >> num) {
    std::cout << num << " is the current largest.\n";

    largest = num;

    if(first){
      std::cout << "The largest number is " << largest << "\n";
      first = false;
    }

    if (largest > smallest)
      std::cout << "num1 is bigger and num2 is smaller"
                << "\n";
    if (largest < smallest)
      std::cout << "num2 is bigger and num1 is smaller"
                << "\n";
    else if (largest == smallest)
      std::cout << "They are equal\n";

    if (almost_equal(largest, smallest, 0.01))
      std::cout << "The numbers are almost equal\n";
    else
      std::cout << "The numbers do not differ by less than 0.01\n";
  }
  return 0;
}
