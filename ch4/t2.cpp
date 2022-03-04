#include <iostream>
#include <vector>
#include <string>
#include <algorithm>



int main()
{
    std::vector<std::string> currentSet =
    {
        "HEAT",
        "COLD",
        "WARMTH",
        "COOLNESS",
    };

    std::string input;
    std::getline(std::cin, input);

    auto it = std::find(currentSet.begin(), currentSet.end(), input);

    if (it == currentSet.end())
        std::cout << '"' << input << "\" was not found.\n";
    else
        std::cout << '"' << input << "\" was at index " << it - currentSet.begin() << " in currentSet\n";
}
