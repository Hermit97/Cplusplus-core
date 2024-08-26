#include <iostream>
#include <vector>
#include <cctype>

int main(){
  std::vector<char> char_numbers;
  std::vector<char> nums = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};
  bool not_char = false;
  char numbers;
  std::cin >> numbers;

  for(char x : nums){
    if(x != numbers)
      not_char = true;
    else {
      not_char = false;
      break;
    }
  } 

  if(not_char == true){
    std::cout << "Non char number entered.\n";
    exit(0);
  }


 /* 
  
  char_numbers.push_back(numbers);

  for(char x : char_numbers)
    std::cout << x << "\n";

    */
  //convrt char to int then push it from char_numbers to a int vector
}
