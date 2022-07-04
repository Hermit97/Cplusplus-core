/*1. Check input for size. Should not be bigger than '9' or smaller than '0'
 *2. Push the char input into the int vector */

#include <iostream>
#include <vector>

std::vector<int> getInfoForVector(std::vector<int> num, char ch){
  std::cout <<"Enter a number\n";
  std::cin >> ch;
  if(ch < '0' || ch > '9'){
    std::cout << "Input is to big or small\n";
  }

}
