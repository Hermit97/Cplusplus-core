#include <iostream>
#include <string>
#include <vector>

int main() {
  int median;
  std::vector<double> temps;
  for (double temp; std::cin >> temp;)
    temps.push_back(temp);

  // unsorted
  std::cout << "You entered \n";
  for (int x : temps)
    std::cout << x << "\n";

  // sorted from desending to ascending
  for (int i = 0; i < temps.size(); ++i) {
    for (int j = 0; j < temps.size() - 1; ++j) {
      if (temps[j] > temps[j + 1]) {
        int temp = temps[j];
        temps[j] = temps[j + 1];
        temps[j + 1] = temp;
      }
    }
  }
  // print sorted
  std::cout << "sorted\n";
  for (int x : temps)
    std::cout << x << "\n";

  // Get the size of the vector and divide by 2. The resulting position is the
  // median (This is for odd size only.)
  if (temps.size() % 2 == 0) {
      int first = (temps.size() / 2) - 1 ;
      int second = (temps.size() / 2);
      int even_median = temps[first] + temps[second];
      int sum = even_median / 2;
      //std::cout << "Median of even numbers is " << even_median << "\n";
      std::cout << "Median of even numbers is " << sum << "\n";
  } else {
    median = (temps.size() + 1) / 2;
    std::cout << "Odd median: " << temps[median - 1] << "\n";
  }
}
