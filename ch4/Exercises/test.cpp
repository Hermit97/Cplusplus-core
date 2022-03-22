#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Read a sequence of double values into a vector . Think of each value as
the distance between two cities along a given route. Compute and print
the total distance (the sum of all distances). Find and print the smallest
and greatest distance between two neighboring cities. Find and print the
mean distance between two neighboring cities.
*/

int main(){
    std::vector<double> dists;

    std::cout << "Enter the distances\n";
    for(double dist; std::cin >> dist;)
        dists.push_back(dist);

    std::cout << "Vector values:\n";
    std::string comma = " ";
    for(int i = 0; i < dists.size(); i++){
        std::cout << comma << dists[i];
        comma = ",";
    }

    std::cout << std::endl;

    //Total sum
    int sum = 0;
    for(int i = 0; i < dists.size(); i++){
        sum += dists[i];
    }

    std::cout << "Sum = " << sum << "\n";

}
