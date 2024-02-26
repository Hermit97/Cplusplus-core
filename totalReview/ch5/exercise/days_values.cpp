#include <iostream>
#include "error.h"
#include <string>
#include <vector>


/*Take input for day of week and value. Dont accept incorrect days, but do accept abbreviations.*/

std::vector<std::string> days = {"Monday", "monday", "mon", "mon", "Tueday", "tuesday", "tues", "Tues", "Wendsday", "wendsday", "weds", "Weds", "Thursday", "thursday", "turs", "Thurs", "Friday", "friday", "fri", "Fri", "Saturday", "saturday", "sat", "Sat", "Sunday", "sunday", "sun", "Sun"};

void input_days(){
  std::string day;
  while(true){
    std::cin >> day;
    if(day == "q"){
      //days.pop_back();
      break;
    }  
    for(int i = 0; i < days.size(); ++i){
      //write logic here to iterate over the whole vector for any matches if not then print invalid input and take inpunt again and repeat. 
      if(day != days[i]){
	if(i == days.size()-1){
	  std::cout << "Invalid input\n";
	  break;
	}

      }else{
	std::cout << "Match found\n";
	break;
      }
    }
    /*if(!std::cin)
      error("Not a string value\n");
    else
      days.push_back(day);
    */

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
