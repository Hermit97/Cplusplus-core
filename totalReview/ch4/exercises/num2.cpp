#include <iostream>
#include <vector>

/*Read a sequence of double values into a vector. Think of each value as
the distance between two cities along a given route. Compute and print
the total distance (the sum of all distances). Find and print the smallest
and greatest distance between two neighboring cities. Find and print the
mean distance between two neighboring cities.*/

int main() {
  std::vector<double> city_distance;
  double distances;
  double sum = 0;
  double mean;
  int greatest;
  while (std::cin >> distances) {
    city_distance.push_back(distances);
  }

  for (int x : city_distance)
    std::cout << x << "\n";

  // sort city_distances
  for (int i = 0; i < city_distance.size(); ++i) {
    for (int j = 0; j < city_distance.size() - 1; ++j) {
      if (city_distance[j] > city_distance[j + 1]) {
        int temp = city_distance[j];
        city_distance[j] = city_distance[j + 1];
        city_distance[j + 1] = temp;
      }
    }
  }
  std::cout << "sorted\n";
  for (int x : city_distance)
    std::cout << x << "\n";

  greatest = city_distance.size() - 1;

  std::cout << "The smallest distance between 2 cities is " << city_distance[0]
            << " "
            << " the greatest is " << city_distance[greatest] << "\n";
  // Find the mean
  for (int i = 0; i < city_distance.size(); ++i) {
    sum = city_distance[i] + sum;
  }
                                                               mean = sum / city_distance.size();
                                                               std::cout << "The mean is " << mean << "\n";
}
