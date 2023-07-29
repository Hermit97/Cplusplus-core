#include <iostream>
#include <vector>

bool almost_equal(double num1, double num2, double temp) {
    double diff = num1 - num2;

    if (diff < temp)
        diff = -diff;

    return diff < temp;
}

int main() {
    double num, largest = 0.0, smallest = 0.0, sum = 0.0, convert;
    std::string userUnit;
    std::vector<double> numbers;
    std::vector<std::string> units = {"cm", "m", "in", "ft"};
    std::vector<std::string> illegalUnits = {"y", "yards", "meter", "km", "gallons"};

    std::cout << "Enter a number and its unit: \n";

    while (std::cin >> num >> userUnit) {
        bool isTrue = false;
        for (int i = 0; i < units.size(); ++i) {
            if (userUnit == units[i]) {
                isTrue = true;
                std::cout << "match found\n";
                break;
            }
        }

        if (isTrue) {
            numbers.push_back(num);

            if (num > largest || numbers.size() == 1) {
                largest = num;
            }
            if (num < smallest || numbers.size() == 1) {
                smallest = num;
            }

            std::cout << "The largest number so far is " << largest << ", the smallest is " << smallest << "\n";
            if (numbers.size() > 1) {
                if (almost_equal(largest, smallest, 0.01))
                    std::cout << "The numbers are almost equal\n";
                else
                    std::cout << "The numbers do not differ by less than 0.01\n";
            }

            if (userUnit == units[0]) {
                convert = num / 100;
                std::cout << num << units[0] << " converted to " << convert << "m\n";
            } else if (userUnit == units[1]) {
                convert = num;
                std::cout << num << units[1] << " value does not change since it's already in meters.\n";
            } else if (userUnit == units[2]) {
                convert = num * 0.0254;
                std::cout << num << units[2] << " converted to " << convert << "m\n";
            } else if (userUnit == units[3]) {
                convert = num * 0.3048;
                std::cout << num << units[3] << " converted to " << convert << "m\n";
            }

            sum += num;
        } else {
            std::cout << "Invalid unit. Try again.\n";
        }
    }

    std::cout << "The sum of all of the entries is " << sum << "m\n";
    std::cout << "The number of values entered is " << numbers.size() << "\n";

    return 0;
}
