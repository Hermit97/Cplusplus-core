/*Enter n in values (| to stop)
  ask user the amount of number of values they want you to calculate the sum of
  check for user_asked > vector[total] if so give appropiate error
*/

#include "error.h"
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
  std::cout << nums.size() << "\n";
  std::cout << "Enter the number of elements you want to calculate in order.\n";
  std::cin >> num; // Im thinking to make a seperate function for checking for
                   // invalid inputs like here for int num.
  if (std::cin.fail())
    error(invalid_input);

  if (num != static_cast<int>(num))
    error(invalid_input);

  if (num >= nums.size())
    error(out_of_range_error);

  for (int i = 0; i < nums.size() - 1; ++i) {
    if (i <= num)
      total = total + nums[i];
    else
      std::cout << "The total is " << total << "\n";
  }
  std::cout << "The total is " << total << "\n";
}

//calculate n-1 adjacent values and store them into a double type vector
//std::vector<double> adjacent_values(std::vector<int> nums){
std::vector<double> adjacent_values(std::vector<int> nums){
  std::vector<double> adjacent_nums;
  int add_adjacent;
  for(int i = 0; i < nums.size() - 1; ++i){
    add_adjacent = nums[i] + nums[i] + 1;
    nums.push_back(add_adjacent);
  }

  return adjacent_nums;
}

//random note the program runs but never exits after it shoujld it just akes mroe input
void run() {
  try {
    calculate_range(input_nums());
    for(int i : adjacent_values(input_nums()))
	  std::cout << i << "\n";
      
  }

  catch (std::runtime_error &e) {
    std::cerr << "Runtime error: " << e.what() << "\n";
  } catch (std::invalid_argument &e) {
    std::cerr << "Runtime error: " << invalid_input << "\n";
  }
}


int main() { run(); }
