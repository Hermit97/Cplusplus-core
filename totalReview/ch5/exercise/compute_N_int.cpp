/*Enter n in values (| to stop)
  ask user the amount of number of values they want you to calculate the sum of
  check for user_asked > vector[total] if so give appropiate error
*/

#include "error.h"
#include <cstdlib>
#include <ios>
#include <iostream>
#include <limits>
#include <stdexcept>
#include <string>
#include <system_error>
#include <vector>

std::string invalid_input = "Non integer entered";
std::string out_of_range_error = "Out of range input entered";
//std::vector<int> input_nums;
std::vector<int> nums;
std::vector<int> get_input_nums() {
    //std::vector<int> numbers;
  double temp_num;
  std::string temp_string;
  int vector_real_size;
  while (true) {
    std::cin >> temp_num;
    if (std::cin.fail()) {
      std::cin.clear();
      std::cin >> temp_string;
      if (temp_string == "|")
        break;
      else
        error(invalid_input);
    }
    if (std::cin.fail())
      error(invalid_input);
    if (temp_num == static_cast<int>(temp_num))
      nums.push_back(temp_num);
    else
      error(invalid_input);
  }
  return nums;
}

void calculate_range() {
    get_input_nums(); //This needs to be run first
  double num;
  int total = 0;
  int real_num;
  int vector_real_size;
  int real_total = 0;
  // std::cout << nums.size() << "\n";
  std::cout << "Enter the number of elements you want to calculate in order.\n";
  std::cin >> num; // Im thinking to make a seperate function for checking for
                   // invalid inputs like here for int num.
  if (std::cin.fail())
    error(invalid_input);

  if (num != static_cast<int>(num))
    error(invalid_input);

  if (num >= nums.size())
    error(out_of_range_error);

  vector_real_size = nums.size() - 1;
  for (int i = 0; i < nums.size(); ++i) {
    if (num > vector_real_size)
      error(out_of_range_error);
    else {
      while (i <= num) {
        total = total + nums[i];
        break;
      }
    }
  }

  std::cout << "Total\n";
  std::cout << total << "\n";
}

// calculate n-1 adjacent values and store them into a double type vector
std::vector<double> adjacent_values(std::vector<int> nums) {
  std::vector<double> adjacent_nums;
  int diff_adjacent = 0;
  for (int i = 0; i < nums.size(); ++i) { // 1, 2, 3 size = 3 max element = 2
      if(i == nums.size() - 1)
	  break;
      diff_adjacent = nums[i] - nums[i+1];
      adjacent_nums.push_back(diff_adjacent);
  }

  return adjacent_nums;
}

void run() {
  try {
    std::cout << "The values are\n";

    calculate_range();

    std::cout << "Here are the n-1 adjacent values\n";
     for (int i : adjacent_values(nums))
	 std::cout << i << "\n";
  }

  catch (std::runtime_error &e) {
    std::cerr << "Runtime error: " << e.what() << "\n";
  } catch (std::invalid_argument &e) {
    std::cerr << "Runtime error: " << invalid_input << "\n";
  }
}

int main() { run(); }
