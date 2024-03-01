#include "error.h"
#include <ios>
#include <iostream>
#include <limits>
#include <string>
#include <vector>

/*Take input for day of week and value. Dont accept incorrect days, but do
 * accept abbreviations.*/
std::vector<std::string> days = {
    "Monday",   "monday",   "mon",      "mon",      "Tueday", "tuesday",
    "tues",     "Tues",     "Wendsday", "wendsday", "weds",   "Weds",
    "Thursday", "thursday", "turs",     "Thurs",    "Friday", "friday",
    "fri",      "Fri",      "Saturday", "saturday", "sat",    "Sat",
    "Sunday",   "sunday",   "sun",      "Sun"};
int num;
std::string current_day;

void input_days() {
  std::string day;
  while (true) {
    std::cin >> day;
    if (day == "q") {
      break;
    }
    for (int i = 0; i < days.size(); ++i) {
      if (day != days[i]) {
        if (i == days.size() - 1) {
          std::cout << "Invalid input\n";
          std::cin >> day;
	  i = 0;
          continue;
        }
      } else {
        //std::cout << "Match found\n";
        std::cin.clear();
        break;
      }
    }
    break;
  }
  current_day = day;
}

void value() {
  double val;
  int whole_number;
  double check_int;
  int i = 0;
  while (true) {
    if(i == 1)
      break;
    std::cout << "Enter a value:\n";
    std::cin >> val;

    if(val == 0)
      exit(0);

    if(!std::cin){
      std::cout << "invalid input\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    //logic for handling doubles
    if(val == static_cast<int>(val))
      whole_number = static_cast<int>(val);
    else{
      std::cout << "invalid input\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    ++i;
  }
  num = whole_number;
}

void print_day_value() {
  input_days();
  value();
  std::cout << "Day is " << current_day << " ";
  std::cout << "Value is " << num << "\n";
}

int main() {
  print_day_value();
  return 0;
}
