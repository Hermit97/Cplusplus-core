#include <iostream>
#include "error.h"
#include <string>
#include <vector>


/*Take input for day of week and value. Dont accept incorrect days, but do accept abbreviations.*/

std::vector<std::string> days = {"Monday", "monday", "mon", "mon", "Tueday", "tuesday", "tues", "Tues", "Wendsday", "wendsday", "weds", "Weds", "Thursday", "thursday", "turs", "Thurs", "Friday", "friday", "fri", "Fri", "Saturday", "saturday", "sat", "Sat", "Sunday", "sunday", "sun", "Sun"};

void check_invalid_string_input(std::string s){
  if(s == std::string(s)){
    //Convert the string to a int and check if its an int. If not then change it back to a string
    int number = std::stoi(s);
    std::cout << number << "\n";
    if(number == int(number))
      error("You entered a number, should be a string\n");
    else{
      s = std::to_string(number);
    }
  }
  else
    std::cout << "Nope\n";
}

void input_days(){
  std::string day;
  while(true){
    std::cin >> day;
    for(int i = 0; i < days.size(); ++i){
      //write logic here to iterate over the whole vector for any matches if not then print invalid input and take inpunt again and repeat. 
      if(day != days[i]){
	std::cout << "Invalid input\n";
	std::cin >> day;
      }
    }
    if(!std::cin)
      error("Not a string value\n");
    else
      days.push_back(day);

    if(day == "q"){
      days.pop_back();
      break;
    }
  }
}

int main(){
  input_days();
  return 0;
}
