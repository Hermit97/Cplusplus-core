#include <iostream>
#include <vector>
#include <string>

const std::string invalid_input = "Non-integer entered";

void error(const std::string& message) {
    std::cerr << "Error: " << message << std::endl;
    exit(EXIT_FAILURE);
}

std::vector<int> input_nums() {
    std::vector<int> numbers;
    double temp_double;
    std::string temp_string;

    std::cout << "Enter an integer or enter | to stop\n";
    while (true) {
        std::cin >> temp_string;
        if (temp_string == "|")
            break;

        try {
            temp_double = std::stod(temp_string); // Converts string to double
            if (temp_double == static_cast<int>(temp_double)) {
                numbers.push_back(static_cast<int>(temp_double));
            } else {
                error(invalid_input);
            }
        } catch (const std::invalid_argument& e) {
            error(invalid_input);
        } catch (const std::out_of_range& e) {
            error(invalid_input);
        }
    }
    return numbers;
}

int main() {
    std::vector<int> result = input_nums();

    std::cout << "Entered integers: ";
    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
