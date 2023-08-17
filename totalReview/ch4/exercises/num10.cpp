/*Modify the program described in the previous exercise to take an input
value max and then find all prime numbers from 1 to max.
*/

#include <iostream>
#include <vector>

std::vector<int> primes = {2};
//std::vector<int> primes;
/*bool check_prime(int n){
    for(int prime : primes){
        if(prime * prime > n)
            return true;
        if(n % prime == 0) //Not prime because it divides evenly with no remainder
            return false;
    }
    return true;
}*/

/*bool check_prime(int n){
    if(n == 1)
        if(n % 1 == 0)
            return false;
    if(n == 2)
        return true;
    for(int prime : primes){
        if(prime * prime > n)
            return true;
        if(n % prime == 0)
            return false;
    }
    return true;
}*/

bool check_prime(int n){
    if(n == 1)
        if(n % 1 == 0)
            return false;
    if(n == 2)
        return true;
    for(int prime : primes){
        if(n % prime == 0)
            return false;
    }
    return true;
}

int main(){
    int max;
    std::cout << "Enter the max amount the prime should go to\n";
    std::cin >> max;
    for(int n = 1; n <= max; ++n){
        if(check_prime(n)){
            primes.push_back(n);
        }
    }

    for(int x : primes){
        std::cout << x << "\n";
    }
}
