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
std::string end = "|";
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

void calculate_range(std::vector<int> nums){
  int num;
  int total = 0;
  std::cout << nums.size() << "\n";
  std::cout << "Enter the number of elements you want to calculate in order.\n";
  std::cin >> num; //Im thinking to make a seperate function for checking for invalid inputs like here for int num.
  if(std::cin.fail()){
    error(invalid_input);
    
  for(int i = 0; i < nums.size() - 1; ++i){
    if(i > num)
      total = total + nums[i];
    else
      std::cout << "The total is " << total << "\n";
  }
}

void run(){
  try {
    //for (int i : input_nums())
    //std::cout << i;
    calculate_range(input_nums());
    
  }

  catch (std::runtime_error &e) {
    std::cerr << "Runtime error: " << e.what() << "\n";
  } catch (std::invalid_argument &e) {
    std::cerr << "Runtime error: " << invalid_input << "\n";
  }
}

void test() {
  double temp_num;
  std::string temp_string;
  if (std::cin >> temp_num) {
    std::cout << "valid\n";
  } else {
    std::cin.clear();
    // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> temp_string;
    std::cout << "The invalid ionput is " << temp_string << "\n";
  }
}

int main() {
  run();
}
