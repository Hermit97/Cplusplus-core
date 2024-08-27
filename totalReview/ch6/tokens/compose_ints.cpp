/*Write a program that reads digits and composes them into integers. For
example, 123 is read as the characters 1, 2, and 3. The program should
output 123 is 1 hundred and 2 tens and 3 ones. The number should be
output as an int value. Handle numbers with one, two, three, or four
digits. Hint: To get the integer value 5 from the character '5' subtract '0',
that is, '5'– '0'==5.*/
#include <iostream>
#include <vector>
#include <cstring>
#include <cctype>

/*int convert_char_to_int(char num){
  int converted_num;
  
  std::vector<int> numbers = {1, 2, 3, 4, 5,6 7, 8, 9, 0};
   
  return converted_num;
}*/
int main(){
  int base;
  //char num1[4];
  char num1[base];
  char num2;
  char num3;
  char num4;
  
  char base_zero = '0';
  char base_one;
  char base_two;
  char base_three;

  int digits[4];
  

  std::cin >> base;
  //std::cin >> num1 >> num2 >> num3 >> num4;
  std::cin >> num1;

  //check if its size is 4
  if(std::strlen(num1) != 4){
    std::cerr << "Error. Must be 4 digits exact\n";
    exit(0);
  }

  //Check if non char is entered
  for(int i = 1; i <= 4 - 1; ++i)
    if(!std::isdigit(num1[i])){
      std::cerr << "Non char entered in the " << i << " position\n";
      exit(0);
    }

  //convert char to int
  for(int i = 0; i < 4; ++i)
    digits[i] = num1[i] - '0';

  for(int x : digits)
    std::cout << x << "\n";

  //seperate digits and assign ones, hundreeds thousands etc to them and print them
  for(int i = 0; i < 4; ++i){
	  if(i == 3)
		  std::cout << digits[i] << "ones";
  }
   
  return 0;
}
