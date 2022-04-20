#include <cctype>
#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Create a program to find all the prime numbers between 1 and 100. There
is a classic method for doing this, called the “Sieve of Eratosthenes.” If
you don’t know that method, get on the web and look it up. Write your
program using this method.*/

int main(){
  int num;
  bool foundNum;
  std::vector<int> nums {1, 2, 3, 4};
  std::cin >> num;



  for(int i = 0; i < nums.size(); i++){
    if(num != nums[i]){
      foundNum = false;
    }else if(num == nums[i]){
      std::cout << num << " = " << nums[i] << "\n";
      foundNum = true;
      break;
    }
  }

  if(foundNum == false)
    std::cout << "Number not found\n";

  
}
