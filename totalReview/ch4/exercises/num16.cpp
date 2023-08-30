#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

int main() {
    std::vector<std::string> sequence;
    std::string input;

    // Read strings into the sequence until the user enters an empty string
    while (true) {
        std::cout << "Enter a string (or press Enter to finish): ";
        std::getline(std::cin, input);
        if (input.empty()) {
            break;
        }
        sequence.push_back(input);
    }

    if (sequence.empty()) {
        std::cout << "No strings entered." << std::endl;
        return 0;
    }

    // Find the minimum and maximum strings
    std::string minString = *std::min_element(sequence.begin(), sequence.end());
    std::string maxString = *std::max_element(sequence.begin(), sequence.end());

    // Find the mode (most frequently occurring string)
    std::map<std::string, int> frequencyMap;
    for (const std::string& str : sequence) {
        frequencyMap[str]++;
    }
    int maxFrequency = 0;
    std::string modeString;
    for (const auto& pair : frequencyMap) {
        if (pair.second > maxFrequency) {
            maxFrequency = pair.second;
            modeString = pair.first;
        }
    }

    std::cout << "Minimum string: " << minString << std::endl;
    std::cout << "Maximum string: " << maxString << std::endl;
    std::cout << "Mode: " << modeString << " (occurs " << maxFrequency << " times)" << std::endl;

    return 0;
}
