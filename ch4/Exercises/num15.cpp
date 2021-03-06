#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include <system_error>
#include <vector>

/*In the drill, you wrote a program that, given a series of numbers, found
the max and min of that series. The number that appears the most times
in a sequence is called the mode. Create a program that finds the mode of
a set of positive integers.*/

int main() {
  int max, min, temp;
  std::vector<int> num;
  std::vector<int > modeNums;
  int num1;
  bool isNegative = true;


  // Enter and print series of numbers
  for (int nums; std::cin >> nums;) {
      while(nums < 0){
          std::cin.clear();
          std::cout << "Try again";
          std::cin >> nums;
      }
          num.push_back(nums);
  }


  std::cout << "Unsorted:\n";
  for (int i = 0; i < num.size(); i++)
    std::cout << num[i] << "\n";

  // Sort the numbers from lowest to greatest without sort()
  for (int i = 0; i < num.size(); i++) {
    for (int j = i + 1; j < num.size(); j++) {
      // Check if i + 1 is bigger than i, if so swap them other wise move on
      if (num[i] > num[j]) {
        temp = num[j];
        num[j] = num[i];
        num[i] = temp;
      }
    }
  }

  std::cout << "Sorted:\n";
  for (int i = 0; i < num.size(); i++)
    std::cout << num[i] << "\n";

  // Find the min
  min = num[0];
  std::cout << "Min is " << min << "\n";

  // Find the max
  max = num[0];
  for (int i = 0; i < num.size(); i++) {
    if (num[i] > max)
      max = num[i];
  }

  std::cout << "Max is " << max << "\n";

  //Find the mode
  int mode;
  for(int i = 0; i < num.size(); i++){
    if(num[i]== num[i + 1]){
        mode = num[i];
        modeNums.push_back(mode);
    }
  }

  std::cout << "Mode: ";
  std::string whitespace = "";
  for(int i = 0; i < modeNums.size(); i++){
      std::cout << whitespace <<  modeNums[i];
      whitespace = ",";
  }

  std::cout << "\n";
}
