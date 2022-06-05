/*Read (day-of-the-week,value) pairs from standard input. For example:
Tuesday 23 Friday 56 Tuesday –3 Thursday 99
Collect all the values for each day of the week in a vector<int> . Write out
the values of the seven day-of-the-week vector s. Print out the sum of the
values in each vector . Ignore illegal days of the week, such as Funday ,
but accept common synonyms*/

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

/*void getDays(std::string day, int val) {
  if (day == "Monday" || day == "monday" || day == "mon")
    std::cout << "Monday " << monday[0];
  if (day == "Tuesday" || day == "tuesday" || day == "tues")
    std::cout << "Tuesday" << tuesday[0];
  if (day == "Wednsday" || day == "wedsnday" || day == "weds")
    std::cout << "Wednsday" << wednsday[0];
  if (day == "Thursday" || day == "thursday" || day == "thurs")
    std::cout << "Thursday" << thursday[0];
  if (day == "Friday" || day == "friday" || day == "fri")
    std::cout << "Friday" << friday[0];
  if (day == "Saturday" || day == "saturday" || day == "sat")
    std::cout << "Saturday" << saturday[0];
  if (day == "Sunday" || day == "sunday" || day == "sun")
    std::cout << "Sunday" << sunday[0];
  else
    throw std::runtime_error("Invalid input");
}
*/

void getDays(std::string day, int val) {
  if (day == "Monday" || day == "monday" || day == "mon")
    monday.push_back(val);
  if (day == "Tuesday" || day == "tuesday" || day == "tues")
    tuesday.push_back(val);
  if (day == "Wednsday" || day == "wedsnday" || day == "weds")
    wednsday.push_back(val);
  if (day == "Thursday" || day == "thursday" || day == "thurs")
    thursday.push_back(val);
  if (day == "Friday" || day == "friday" || day == "fri")
    friday.push_back(val);
  if (day == "Saturday" || day == "saturday" || day == "sat")
    saturday.push_back(val);
  if (day == "Sunday" || day == "sunday" || day == "sun")
    sunday.push_back(val);
  else
    throw std::runtime_error("Invalid input");
}

int getValue(int val){
  std::cout << "Enter a value\n";
  std::cin >> val;
  if(!std::cin)
    throw std::runtime_error("Invalid input");
  return val;
}

int getSum(){

  return sum;
}

void printInfo(std::string day, std::vector<int> v){
  std::cout << day << "Sum: " << getSum();
}

int main(){


}
