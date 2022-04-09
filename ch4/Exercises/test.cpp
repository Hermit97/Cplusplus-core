#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

std::vector<int> primes;

int main(){
  int primeNum = 100;
  bool isPrime = true;

  for(int checkNum = 2; checkNum <= primeNum; checkNum++){
    isPrime = true;

    for(int factor = 2; factor <= checkNum / 2; factor++){
      if(checkNum % factor == 0){
        isPrime = false;
      }


    }
    //primes.push_back(checkNum);
    if(isPrime)
      primes.push_back(checkNum);

  }



  for(int i = 0; i < primes.size(); i++){
    std::cout << primes[i] << "\n";
  }


}
