#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>


int main(){
    std::vector<int> primes;

    //Numbers I want to check for prime
    for(int i = 2; i <= 100; i++){
        bool isPrime = true;
        //Numbers im gonna divide by to see if i is prime
        for(int j = 2; j <= i / 2; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime){
            primes.push_back(i);
        }
    }

    for (int i = 0; i < primes.size(); i++) {
        std::cout << primes[i] << "\n";
    }

}
