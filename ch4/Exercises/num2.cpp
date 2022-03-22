#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

int main(){
    std::vector<double> distances;
    double small, big;
    //distances.std::vector<double>::push_back(10);

    //Read values into vector
    for(double distance; std::cin >> distance;)
        distances.push_back(distance);

    //Print the vector
    std::cout << "Vector: ";
    std::string comma = " ";
    for(int i = 0; i < distances.size(); i++){
        std::cout << comma << distances[i];
        comma = ",";
    }
    std::cout << std::endl;

    //Compute the total distance between the values entered
    double sum = 0;;
    for(int i = 0; i < distances.size(); i++)
        sum += distances[i];

    //Print the sum
    std::cout << sum << std::endl;

    //Find the smallest and biggiest distances.
    //std::sort(distances.begin(), distances.end());

    //Print out the sorted vector
    /*for(int i = 0; i < distances.size(); i++){

    }*/

    //Try finding the smallest and largest without the sort function.
    for(int i = 0; i < distances.size(); i++){
        small = distances[i];

        for(int j = i + 1; j < distances.size(); j++){
            big = distances[j];

            if(small < big){
                small = distances[i];
                big = distances[j];
            }else{
                small = distances[j];
                big = distances[i];
            }
            //std::cout << "Small value is " << small << " big value is " << big << "\n";
        }
    }
            std::cout << "Small value is " << small << " big value is " << big << "\n";
}
