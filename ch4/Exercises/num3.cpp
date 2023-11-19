#include <iostream>

int main() {
    int low = 1;
    int high = 100;
    int guess;
    char response;

    std::cout << "Think of a number between 1 and 100." << std::endl;

    for (int attempts = 1; attempts <= 7; ++attempts) {
        guess = low + (low + high) / 2; // Make a guess in the middle of the current range

        std::cout << "Is the number you are thinking of greater than " << guess << "? (y/n): ";
        std::cin >> response;

        if (response == 'y' || response == 'Y') {
            low = guess + 1; // Adjust the lower bound
        } else {
            high = guess - 1; // Adjust the upper bound
        }

        if (low > high) {
            std::cout << "You must have made a mistake somewhere!" << std::endl;
            break;
        }

        if (low == high) {
            std::cout << "The number you are thinking of is: " << low << std::endl;
            std::cout << "Guessed in " << attempts << " attempts." << std::endl;
            break;
        }
    }

    return 0;
}
