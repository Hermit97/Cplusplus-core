#include <iostream>
#include <cctype>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>

int main() {
  int length;
  char numbers[4];
  int final_number;
  std::string temp;
  std::vector<std::string> place = {"Ten Thousands", "Thousands", "Hundreds", "Ones"};
  std::vector<int> nums;

  std::cin >> numbers;

  //no more than 4 digits
  if(std::strlen(numbers) > 4){
	  std::cout << "Out of range\n";
	  return 1;
  }

  // numbers are valid i.e. non single digits are invalid
  for (int i = 0; i < std::strlen(numbers); ++i) {
    if(!std::isdigit(numbers[i])){
      std::cout << "Error\n";
      exit(0);

      }     
    }

  std::reverse(place.begin(), place.end());
  //convert char to int
  for(int i = 0; i < std::strlen(numbers); ++i){
	  final_number = numbers[i] - '0';
	  //std::cout << "It was " << numbers[i] << " Now its " << final_number << " as an int\n";
	  std::cout << final_number << " " << place[i] << "\n";
  }

}

