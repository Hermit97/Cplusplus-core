#include "error.h"
#include <cctype>
#include <ios>
#include <iostream>
#include <limits>
#include <sstream>
#include <string>
#include <vector>

/*Take input for day of week and value. Dont accept incorrect days, but do
 * accept abbreviations.*/
std::vector<std::string> days;
std::vector<int> num;
std::vector<std::string> match_days = {
    "Monday",   "monday",   "mon",      "Tueday", "tuesday", "tues",
    "Tues",     "Wendsday", "wendsday", "weds",   "Weds",    "Thursday",
    "thursday", "turs",     "Thurs",    "Friday", "friday",  "fri",
    "Fri",      "Saturday", "saturday", "sat",    "Sat",     "Sunday",
    "sunday",   "sun",      "Sun"};

void input_days() {
  std::string day;
  int i = 0;
  int reset = 0;
  std::cout << "Enter days, type done or d to finish.\n";

  while (true) {
    i = 0;
    reset = 0;
    std::cin >> day;

    // handle non string input
    for (char c : day) {
      if (std::isdigit(c)) {
        std::cout << "Invalid input\n";
        ++i;
      }
    }
    if (i > 0)
      continue;
    std::cout << "You entered: " << day << "\n";

    // only accept valid days of the week
    for (int i = 0; i < match_days.size(); ++i) {
      if (reset > 0)
        continue;
      if (i == match_days.size() - 1) {
        std::cout << day << " not valid\n";
        ++reset;
        continue;
      } else if(day == match_days[i]){
        std::cout << day << " has been pushed to the days vector\n";
        days.push_back(day);
        ++reset;
        continue;
      }
    }
  }
}

void value() {
  double val;
  int whole_number;
  double check_int;
  int i = 0;
  while (true) {
    if (i == 1)
      break;
    std::cout << "Enter a value:\n";
    std::cin >> val;

    if (val == 0)
      exit(0);

    if (!std::cin) {
      std::cout << "invalid input\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      continue;
    }

    // logic for handling doubles
    // if(static_cast<double>(val) == static_cast<double>(val))
    if (val == static_cast<int>(val))
      whole_number = static_cast<int>(val);
    else {
      std::cout << "invalid input\n";
      std::cin.clear();
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    ++i;
  }
  // num = whole_number;
}

void print_day_value() { input_days(); }

int main() {
  print_day_value();
  return 0;
}
