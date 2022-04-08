#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>



std::vector<int> primes;
std::vector<int> numbers;

void isPrime(){
    int primeNums = 3;
    for(int i = 2; i <= 100; i++){
        numbers.push_back(i);
    }

    //If numbers vector elements are prime, push them into primes vector.
    for(int i = 2; i <= primeNums; i++){
      if (primeNums % i == 0) {
          std::cout << "Not a prime number " << i << "\n";
      }else {
          std::cout << "IS prime\n";
      }
    }
}

int main(){
    isPrime();



}
