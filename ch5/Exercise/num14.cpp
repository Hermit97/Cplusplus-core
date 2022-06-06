/*Read (day-of-the-week,value) pairs from standard input. For example:
Tuesday 23 Friday 56 Tuesday –3 Thursday 99
Collect all the values for each day of the week in a vector<int> . Write out
the values of the seven day-of-the-week vector s. Print out the sum of the
values in each vector . Ignore illegal days of the week, such as Funday ,
but accept common synonyms*/

#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

std::vector<int> monday;
std::vector<int> tuesday;
std::vector<int> wednsday;
std::vector<int> thursday;
std::vector<int> friday;
std::vector<int> saturday;
std::vector<int> sunday;

const std::string invalidInput = "Invalid input";

/*Monday Sum = 20 \n...etc
 *push value into vector */

void setVal(std::string day, int val) {
  if (day == "Monday" || day == "monday" || day == "mon")
    monday.push_back(val);
  if (day == "Tuesday" || day == "tuesday" || day == "tues")
    tuesday.push_back(val);
  if (day == "Wednsday" || day == "wednsday" || day == "weds")
    wednsday.push_back(val);
  if (day == "Thursday" || day == "thursday" || day == "thurs")
    thursday.push_back(val);
  if (day == "Friday" || day == "friday" || day == "fri")
    friday.push_back(val);
  if (day == "Saturday" || day == "saturday" || day == "sat")
    saturday.push_back(val);
  if (day == "Sunday" || day == "sunday" || day == "sun")
    sunday.push_back(val);
}

int getSum(std::string day, std::vector<int> v) {
  int sum = 0;
  for (int i = 0; i < v.size(); ++i) {
    sum = v[i] + sum;
  }
  return sum;
}

void setPrint(std::string day, std::vector<int> v) {
  std::cout << day << " sum = " << getSum(day, v) << "\n";
}

void getPrint() {
  setPrint("Monday", monday);
  setPrint("Tuesday", tuesday);
  setPrint("Wednsday", wednsday);
  setPrint("Thursday", thursday);
  setPrint("Friday", friday);
  setPrint("Saturday", saturday);
  setPrint("Sunday", sunday);
}

int main() {
  try {
    bool dontStop = true;

    while (dontStop == true) {
      std::string day;
      int val;

      std::cout << "Enter a day and a value\n";
      std::cin >> day >> val;

      if(day == "null" || val == 0)
        break;

      if(!std::cin)
        throw std::runtime_error(invalidInput);

      setVal(day, val);
      getPrint();
    }
      getPrint();
  }catch(std::exception& e){
    std::cerr << "Error: " << e.what() << "\n";
  }
}
