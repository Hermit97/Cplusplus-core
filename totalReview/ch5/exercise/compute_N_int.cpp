/*Enter n in values (| to stop)
  ask user the amount of number of values they want you to calculate the sum of
  check for user_asked > vector[total] if so give appropiate error
*/

#include <iostream>
#include "error.h"
#include <string>
#include <system_error>
#include <vector>

std::string non_int = "Non integer entered";
std::vector<int>get_input(){
  double numbers;
  std::vector<int> nums;

  std::cout << "Enter a bunch of integers for a vector\n";

  //while(std::cin >> numbers){
  while(true){
    std::cin >> numbers;
    if(!std::cin)
      error(non_int);

    std::string temp_number = std::to_string(numbers);

    if(temp_number == "|")
      break;
    else if(!std::cin)
      error(non_int);
    else
      numbers = static_cast<double>(numbers);

    if(numbers == static_cast<int>(numbers)){
      nums.push_back(numbers);
      
    }else{
      std::cin.clear();
      error(non_int);
    }
  }
  return nums;
}

void test_char_input(){
  int num;
  std::cout << "Enter a int \n";
  std::cin >> num;

  if(!std::cin)
    std::cout << "Error cant enter a string or char\n";
}

int main(){
  try{
    std::cout << get_input().size() << "\n";
    //test_char_input();
  }

  catch(std::runtime_error& e){
    std::cerr << "Runtime error: " << e.what() << '\n';
  }
}
