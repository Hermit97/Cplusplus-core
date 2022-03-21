#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

int main() {
    std::vector<double> temps;
    for(double temp; std::cin >> temp;)
        temps.push_back(temp);

    double sum = 0;
    for(int x : temps) sum += x;
    std::cout << "Average temperature: " << sum/temps.size() << '\n';

    sort(temps.begin(), temps.end());

    //Odd
    if(temps.size() % 2 != 0){
        std::cout << "Odd data set median temperature:" << temps[temps.size()/2] << '\n';
    //Even
    //Find the two numbers in the middle and divide them both by 2
    }else if(temps.size() % 2 == 0){
        std::cout << "Even median temperature:" << (temps[temps.size()/ 2 - 1] + temps[temps.size() / 2]) / 2 << '\n';
        std::cout << "Even median temperature:" << (temps[temps.size()/ 2] + temps[temps.size() / 2 + 1]) / 2 << '\n';

    }

}
