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

//I could make it so it has to enter one day from each inner vector so it has all the days of the week equal to 7.
std::vector<std::string> days;
std::vector<int> num;
std::vector<std::vector<std::string>> match_days = {
    {"Monday", "monday", "mon"},
    {"Tuesday", "tuesday", "tues", "Tues"},
    {"Wendsday", "wendsday", "weds", "Weds"},
    {"Thursday", "thursday", "thurs", "Thurs"},
    {"Friday", "friday", "fri", "Fri"},
    {"Saturday", "saturday", "sat", "Sat"},
    {"Sunday", "sunday", "sun", "Sun"}};

// get the size of the inner loops total
int inner_vector_size() {
  int i = 0;
  for (const auto &weeks : match_days) {
    ++i;
  }
  return i;
}

int inner_week_days() {
  bool reset = false;
  int i = 0;
  for (const auto &weeks : match_days) {
    for (const auto &days : weeks) {
      ++i;
    }
  }
  return i;
}

void input_days() {
  std::string day;
  int i = 0;
  int iterates = 0;
  int reset = 0;
  bool match_found = true;

  while (iterates < 7) {
    std::cout << "Enter days, type done or d to finish.\n";
    std::cin >> day;
    if (day == "q")
      break;

    // handle non string input
    for (char c : day) {
      if (std::isdigit(c)) {
        std::cout << "Invalid input\n";
        ++i;
      }
    }
    std::cout << "You entered: " << day << "\n";

    // only accept valid days of the week
    for (const auto &weekdays : match_days) {
      for (const auto &inner_days : weekdays) {
        if (day == inner_days) {
          match_found = true;
          break;
        } else {
          match_found = false;
          ++i;
          if (i == inner_week_days())
            break;
        }
      }
      if (match_found == true) {
	break;
      }
    }

    if(match_found == true){
       std::cout << "Match found: " << day << "\n";
        days.push_back(day);
    }else{
      std::cout << "Invalid input:" << day << "\n";
      --iterates;
    }
    ++iterates;
  }

  //check if the days vector is getting all of the input correctly
  for(std::string i : days)
    std::cout << i << "\n";
}

  void value() {
    double val;
    int whole_number;
    double check_int;
    int i = 0;
    int iterator = 0;
    while (iterator < 7) {
      std::cout << "Enter a value:\n";
      std::cin >> val;

      if (!std::cin) {
        std::cout << "invalid input\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        continue;
      }

      // logic for handling doubles
      if (val == static_cast<int>(val)){
        whole_number = static_cast<int>(val);
	num.push_back(whole_number);
	++iterator;
      }else {
        std::cout << "invalid input\n";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
      }
      ++i;
    }
  }

  void print_day_value()
  {
    input_days();
    value();
    for(int i = 0; i < days.size() && i < num.size(); ++i){
      std::cout << days[i] << " " << num[i];
      std::cout << " ";
    }
    std::cout << "\n";
  }

  int main() {
    print_day_value();
    return 0;
  }
