#include <iostream>
#include "error.h"
#include <string>
#include <vector>


/*Take input for day of week and value. Dont accept incorrect days, but do accept abbreviations.*/

std::vector<std::string> days;

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

void check_for_int(){
  
}

void test(){
  std::string s1 = "hello\n";
  int num = std::stoi(s1);
  std::cout << num << "\n";
}

void input_days(){
  std::string day;
  while(true){
    std::cin >> day;
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
  //input_days();
  //std::string s = "1";
  //check_invalid_string_input(s);
  test();
}
