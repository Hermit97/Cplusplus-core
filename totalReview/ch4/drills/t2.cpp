#include <iostream>
#include <vector>

int main() {
  std::vector<double> numbers;
  std::vector<double> meters;
  std::vector<std::string> units = {"cm", "m", "in", "ft"};
  double num;
  std::string unitInput;

  while (std::cin >> num >> unitInput) {
    numbers.push_back(num);
    // convert num into meters and push it into meters vector
    // Taking out the for loop and leaving the if statements alone also worked.
    // I know their is a big but learn to debug it using lldb to understand whats really happending.
    /*for (int i = 0; i < numbers.size(); ++i) {
      if (unitInput == units[0]) {
        double cm_to_m = numbers[i] / 100;
        meters.push_back(cm_to_m);
      } else if (unitInput == units[1]) {
        // double m_to_m = num
      }
    }*/

    //For loop inside while loop fix it
    //but first figure out why its printing the first value twice.
    /*for (int i = 0; i < meters.size(); ++i) {
      std::cout << meters[i] << " cm "
                << "\n";
      std::cout << "-------------------\n";
    }*/
  }
    for (int i = 0; i < numbers.size(); ++i) {
      if (unitInput == units[0]) {
        double cm_to_m = numbers[i] / 100;
        meters.push_back(cm_to_m);
      } else if (unitInput == units[1]) {
        // double m_to_m = num
      }
    }

    //For loop inside while loop fix it
    //but first figure out why its printing the first value twice.
    for (int i = 0; i < meters.size(); ++i) {
      std::cout << meters[i] << " cm "
                << "\n";
      std::cout << "-------------------\n";
    }
}
