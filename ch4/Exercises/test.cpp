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
  int n = 50;
  std::vector<bool> primes (n, 1);

  for(int i = 2; i < n; i++){
    if(primes[i] == true){
      for(int j = i * 2; j < n; j += i){
        primes[j] = false;
      }
    }

  for(int p = 2; p <= n; p++){
    if(primes[p])
      std::cout << p << "\n";
  }
  }

}
