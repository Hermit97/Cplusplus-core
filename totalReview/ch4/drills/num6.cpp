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
  largest = 0.0;
  smallest = 0.0;
  std::vector<int> numbers;
  while (std::cin >> num) {
    numbers.push_back(num);

      if (num > largest || numbers.size() == 1) {
        largest = num;
      }
       if (num < smallest || numbers.size() == 1) {
        smallest = num;
      }

    std::cout << "The largest number so far is " << largest
              << ", the smallest is " << smallest << "\n";

    /*if (almost_equal(largest, smallest, 0.01))
      std::cout << "The numbers are almost equal\n";
    else
      std::cout << "The numbers do not differ by less than 0.01\n";
      */
  }
  return 0;
}
