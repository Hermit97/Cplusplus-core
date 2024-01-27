/*Enter n in values (| to stop)
  ask user the amount of number of values they want you to calculate the sum of
  check for user_asked > vector[total] if so give appropiate error
*/

#include <iostream>
#include "error.h"
#include <stdexcept>
#include <string>
#include <system_error>
#include <vector>

std::string invalid_input = "Non integer entered";
std::vector<int> input_nums(){
  std::vector<int> numbers;
  double temp_num;

  while(true){
    //std::cin >> temp_num;
    char end = std::cin.peek();
    if(std::cin.peek() == '|'){
      std::cin.ignore();
      break;
    }
    std::cin >> temp_num;
    //temp_num = static_cast<int>(temp_num);
    if(end == '|')
      break;
    if(std::cin.fail())
      error(invalid_input);
    if(temp_num == static_cast<int>(temp_num))
      numbers.push_back(temp_num);
    else
      error(invalid_input);
  }
  return numbers;
}

void test(){
  int num;
  if(std::cin.peek() == '|'){
    std::cin.ignore();
    std::cout << "Accepted\n";
  }
  //std::cin >> num;
}


int main(){
  try{
    std::cout << input_nums().size() << "\n";
    //test();
  }

  catch(std::runtime_error& e){
    std::cerr << "Runtime error: " << e.what() << "\n";
  }
  catch(std::invalid_argument& e){
    std::cerr << "Runtime error: " << invalid_input << "\n";
  }
}
