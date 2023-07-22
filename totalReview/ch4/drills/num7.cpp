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
  std::string userUnit;
  largest = 0.0;
  smallest = 0.0;
  double convert;
  std::vector<int> numbers;
  std::vector<std::string> units = {"cm", "m", "in", "ft"};
  std::vector<std::string> illegalUnits = {"y", "yards", "meter", "km",
                                           "gallons"};
  std::cout << "Enter a number and its unit: "
            << "\n";
  while (std::cin >> num >> userUnit) {
    //numbers.push_back(num);

    for (int i = 0; i < illegalUnits.size(); ++i) {
      if (userUnit == illegalUnits[i]) {
        std::cout << "Illegal units entered try again.\n";
        std::cin >> num >> userUnit;
      }
    }

    numbers.push_back(num);

    if (userUnit == units[0]) {
      convert = num / 100;
      std::cout << num << units[0] << " converted to " << convert << "m\n";
      // Convert in to cm
    } else if (userUnit == units[1]) {
      convert = num * 2.54;
      std::cout << num << units[1] << " converted to " << convert << "cm\n";
      // Convert m to ft
    } else if (userUnit == units[2]) {
      convert = num * 3.281;
      std::cout << num << units[2] << " converted to " << convert << "ft\n";
      // Convert ft to in
    } else if (userUnit == units[3]) {
      convert = num * 12;
      std::cout << num << units[3] << " converted to " << convert << "in\n";
    }

    if (num > largest || numbers.size() == 1) {
      largest = num;
    }
    if (num < smallest || numbers.size() == 1) {
      smallest = num;
    }

    std::cout << "The largest number so far is " << largest
              << ", the smallest is " << smallest << "\n";

    if (numbers.size() > 1) {
      if (almost_equal(largest, smallest, 0.01))
        std::cout << "The numbers are almost equal\n";
      else
        std::cout << "The numbers do not differ by less than 0.01\n";
    }
  }
  return 0;
}
