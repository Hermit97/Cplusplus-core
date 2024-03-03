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
std::vector<std::vector<std::string>> match_days = {
    {"Monday", "monday", "mon"},
    {"Tueday", "tuesday", "tues", "Tues"},
    {"Wendsday", "wendsday", "weds", "Weds"},
    {"Thursday", "thursday", "turs", "Thurs"},
    {"Friday", "friday", "fri", "Fri"},
    {"Saturday", "saturday", "sat", "Sat"},
    {"Sunday", "sunday", "sun", "Sun"}};

// get the size of the inner loops total
int inner_vector_size() {
  int i = 0;
  for (const auto &weeks : match_days) {
    ++i;
  }
  // std::cout << "The total inner vectors are " << i << "\n";

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
  //std::cout << "The total inner vectors are " << i << "\n";
  return i;
}

void input_days() {
  std::string day;
  int i = 0;
  int reset = 0;

  while (true) {
    // i = 0;
    // reset = 0;
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
    // if (i > 0)
    // continue;
    std::cout << "You entered: " << day << "\n";

    // only accept valid days of the week
    for (const auto &weekdays : match_days) {
      for (const auto &inner_days : weekdays) {
        if (day == inner_days) {
          std::cout << "Match found: " << day << "\n";
          days.push_back(day);
	  //put a bool to say it worked then put a if on the oputter for loop to break and go back to the while loop since it workd?
        } else{
          std::cout << "Non existent input entered. Try again.\n";
          //std::cin.clear();
          std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
	if(i == inner_week_days())
	  break;
      }
    }
  }
}
  /*void test(){
  int i = 0;
  std::string day = "mon";
  for (const auto &weekdays : match_days) {
    for(const auto &days : weekdays){
      if(day == days){
	std::cout << "WOW\n";
      }
    }

  }
}
  */
//}

  /*
  for (int i = 0; i < match_days.size(); ++i) {
    if (reset > 0)
      continue;
    if (i == match_days.size() - 1) {
      std::cout << day << " not valid\n";
      ++reset;
      continue;
    } else if (day == match_days[i]) {
      std::cout << day << " has been pushed to the days vector\n";
      days.push_back(day);
      ++reset;
      continue;
    }
  }*/
  //}

  /*void value() {
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
  }*/

  void print_day_value() { input_days(); }

  int main() {
    print_day_value();
    //test();

    // inner_vector_size();
    //inner_week_days();
    return 0;
  }
