#include <cctype>
#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Create a program to find all the prime numbers between 1 and 100. One
way to do this is to write a function that will check if a number is prime
(i.e., see if the number can be divided by a prime number smaller than
itself) using a vector of primes in order (so that if the vector is called
primes , primes[0]==2 , primes[1]==3 , primes[2]==5 , etc.). Then write a
loop that goes from 1 to 100, checks each number to see if it is a prime,
and stores each prime found in a vector . Write another loop that lists the
primes you found. You might check your result by comparing your vector
of prime numbers with primes . Consider 2 the first prime.*/

std::vector<int> primes;
std::vector<int> numbers;

void isPrime(){
    int primeNums = 3;

    for(int i = 2; i <= 100; i++){
        numbers.push_back(i);
    }

    //If numbers vector elements are prime, push them into primes vector.
    for(int i = 2; i < primeNums; i++){
      if (primeNums % i == 0) {
          std::cout << "Not a prime number\n";
      }else {
          std::cout << "IS prime\n";
      }
    }

}

int main(){
    isPrime();


}
