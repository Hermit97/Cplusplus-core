/*Read (day-of-the-week,value) pairs from standard input. For example:
Tuesday 23 Friday 56 Tuesday –3 Thursday 99
Collect all the values for each day of the week in a vector<int> . Write out
the values of the seven day-of-the-week vector s. Print out the sum of the
values in each vector . Ignore illegal days of the week, such as Funday ,
but accept common synonyms*/

#include <iostream>
#include <vector>

std::vector<std::string> monday;
std::vector<std::string> tuesday;
std::vector<std::string> wednsday;
std::vector<std::string> thursday;
std::vector<std::string> friday;
std::vector<std::string> saturday;
std::vector<std::string> sunday;

std::vector<int> val;

void getDays(std::string day) {

  if (day == "Monday" || day == "monday" || day == "mon")
    monday.push_back(day);
  if (day == "Tuesday" || day == "tuesday" || day == "tues")
    tuesday.push_back(day);
  if (day == "Wednsday" || day == "wedsnday" || day == "weds")
    wednsday.push_back(day);
  if (day == "Thurday" || day == "thursday" || day == "thurs")
    thursday.push_back(day);
  if (day == "Friday" || day == "friday" || day == "fri")
    friday.push_back(day);
  if (day == "Saturday" || day == "saturday" || day == "sat")
    saturday.push_back(day);
  if (day == "Sunday" || day == "sunday" || day == "sun")
    sunday.push_back(day);
}

void result(int val) {
    std::cout << monday[0] << " " << val << "\n";
}

int getSum(int sum){

}

int main() {
  bool done = false;
  std::string day;
  int value;
  while (done == false) {
    std::cout << "Enter the day followed by the value\n";
    std::cin >> day >> value;
    getDays(day);
    if (day == "null" && value == 0)
	break;
  }
  result(value);
}
