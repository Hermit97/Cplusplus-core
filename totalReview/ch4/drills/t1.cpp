#include <iostream>
#include <vector>

int main() {
    std::vector<double> numbers;
    double input;
    double smallest = 0.0;
    double largest = 0.0;

    while (true) {
        std::cout << "Enter a double (or any non-double value to exit): ";
        if (!(std::cin >> input)) {
            break;  // Exit the loop if non-double value is entered
        }

        numbers.push_back(input);

        std::cout << "You entered: " << input;
        if (input < smallest || numbers.size() == 1) {
            smallest = input;
            std::cout << " (Smallest so far)";
        }
        if (input > largest || numbers.size() == 1) {
            largest = input;
            std::cout << " (Largest so far)";
        }
        std::cout << std::endl;
    }

    std::cout << "Smallest value entered: " << smallest << std::endl;
    std::cout << "Largest value entered: " << largest << std::endl;

    return 0;
}
