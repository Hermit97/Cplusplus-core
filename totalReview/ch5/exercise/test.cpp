#include <iostream>
#include <limits>  // Include the <limits> header for std::numeric_limits
#include <string>

void test() {
    double num;
    std::string invalidInput;

    while (true) {
        std::cout << "Enter a double (or '|' to exit): ";
        if (std::cin >> num) {
            // Input is a valid double
            std::cout << "Valid input: " << num << std::endl;
        } else {
            // Input is not a valid double
            std::cerr << "Invalid input. Please enter a valid double or '|'.\n";

            // Clear the fail state
            std::cin.clear();

            // Ignore the invalid input
            std::cin >> invalidInput;

            // Now 'invalidInput' contains the invalid input
            std::cout << "Invalid input: " << invalidInput << std::endl;

            // You can use or process 'invalidInput' as needed
        }

        // Check for exit condition
        if (std::cin.peek() == '|') {
            std::cin.ignore();  // Ignore '|'
            break;
        }
    }
}

int main(){
  test();
}
