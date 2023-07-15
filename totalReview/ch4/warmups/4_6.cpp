#include <iostream>
#include <vector>

int main() {
    std::vector<double> temps;
    for(double temp; std::cin >> temp;)
        temps.push_back(temp);
}
