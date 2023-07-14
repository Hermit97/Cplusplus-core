#include <iostream>

bool numbersDifferByLessThan(double a, double b, double threshold) {
    double diff = a - b;
    if (diff < 0) {
        diff = -diff;
    }
    return diff < threshold;
}

int main() {
    double number1 = 1.2;
    double number2 = 1.5;

    if (numbersDifferByLessThan(number1, number2, 0.01)) {
        std::cout << "The numbers differ by less than 0.01." << std::endl;
    } else {
        std::cout << "The numbers do not differ by less than 0.01." << std::endl;
    }

    return 0;
}
