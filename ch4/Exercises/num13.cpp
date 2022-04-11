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


void primeNums(int n){
    std::vector<bool> primes (n, true);
    std::vector <int> isPrime;

    for(int i = 2; i <= n; i++){
        for(int j = i * i; j <= n; j += i){
            primes[j] = false;
        }

    }
        for(int i = 0; i <= n; i++){
            if(primes[i] == true)
                isPrime.push_back(i);
        }

    for(int i = 0; i <isPrime.size(); i++){
        std::cout << isPrime[i] << "\n";
    }
}

int main(){
    int N;
    std::cout << "Enter a number\n";
    std::cin >> N;
    primeNums(N);
}
