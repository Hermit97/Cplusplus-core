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
std::vector<int> input_nums() {
  std::vector<int> numbers;
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
      numbers.push_back(temp_num);
    else
      error(invalid_input);
  }
  return numbers;
}

void calculate_range(std::vector<int> nums) {
  double num;
  int total = 0;
  int real_num;
  int vector_real_size;
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
  for (int i = 0; i < nums.size() - 1; ++i) {
    if (num > vector_real_size)
      error(out_of_range_error);
    else {
	// if (i == num) // This is the issue
        //break;
      total = nums[i] + nums[i] + 1; // issue! total = 0, total = total + num[i]
    }
  }
  std::cout << "The total is " << total << "\n";
}

// calculate n-1 adjacent values and store them into a double type vector
/*std::vector<double> adjacent_values(std::vector<int> nums) {
  std::vector<double> adjacent_nums;
  int add_adjacent;
  for (int i = 0; i < nums.size() - 1;
       ++i) { // 1, 2, 3 size = 3 max element = 2
              if (i == nums.size() - 1) {
                int end = nums[i] + nums.size() - 1;
                adjacent_nums.push_back(end);
                } else {
    add_adjacent = nums[i] - nums[i] + 1;
    adjacent_nums.push_back(add_adjacent);
    // }
  }

  return adjacent_nums;
  }*/

// random note the program runs but never exits after it shoujld it just akes
// mroe input
void run() {
  try {
    calculate_range(input_nums());
    /*for (int i : adjacent_values(input_nums()))
      std::cout << i << "\n";*/
  }

  catch (std::runtime_error &e) {
    std::cerr << "Runtime error: " << e.what() << "\n";
  } catch (std::invalid_argument &e) {
    std::cerr << "Runtime error: " << invalid_input << "\n";
  }
}

int main() { run(); }
