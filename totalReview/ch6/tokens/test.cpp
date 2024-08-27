#include <iostream>
#include <cctype>

bool isDigitChar(char c) {
    return std::isdigit(c);  // Check if the character is a digit
}

int main() {
    char input;

    while (true) {
        std::cout << "Enter a single digit (0-9): ";
        std::cin >> input;  // Read a single character

        if (std::isdigit(input)) {
            int number = input - '0';  // Convert character to integer
            std::cout << "You entered the digit: " << number << std::endl;
            break;  // Exit the loop if input is valid
        } else {
            std::cout << "Invalid input. Please enter a single digit." << std::endl;
        }
    }

    return 0;
}

