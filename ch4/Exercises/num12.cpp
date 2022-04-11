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

/*Mark the multiples of 2, 3, and other prime numbers till N. */
int main(){
    int n = 100;
    std::vector<bool> primes (n, true);

    std::vector<int> isPrime;
    for(int i = 2; i <= n; i++){
        if(primes[i] == true){
            //Gets multiple of i, sets it to false for marking then gets the next multiple and stores it in j.
            for(int j = i * i; j <= n; j = j +i){
                primes[j] = false;
            }
        }
    }
    for(int i = 0; i <= n; i++){
        if(primes[i] == true)
            isPrime.push_back(i);
    }

    for(int i = 0; i < isPrime.size(); i++){
        std::cout << isPrime[i] << "\n";
    }

}
