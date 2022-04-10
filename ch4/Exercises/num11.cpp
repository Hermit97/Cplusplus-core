#include <cctype>
#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Modify the program described in the previous exercise to take an input
value max and then find all prime numbers from 1 to max .*/

std::vector<int> primes;

bool isNumberPrime(int checkNum){
  for(int i = 2; i <= checkNum / 2; i++){
    if(checkNum % i == 0){
      return false;
      break;
    }
  }

  return true;
}

int main(){

  int max;

  std::cout << "Enter a max num\n";
  std::cin >> max;
  std::cout << "Prime numbers: \n";


  for(int i = 2; i <= max; i++){
    if(isNumberPrime(i))
      primes.push_back(i);
  }

  for(int j = 0; j < primes.size(); j++)
    std::cout << primes[j] << "\n";
}
