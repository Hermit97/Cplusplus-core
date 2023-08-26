#include <iostream>
#include <vector>

std::vector<int> primes = {2};
bool check_prime(int n){
    for(int prime : primes){
        if(prime * prime > n)
            return true;
        if(n % prime == 0) //Not prime because it divides evenly with no remainder
            return false;
    }
    return true;
}

int main(){
    for(int n = 3; n <= 100; ++n){
        if(check_prime(n)){
            primes.push_back(n);
        }
    }

    for(int x : primes){
        std::cout << x << "\n";
    }
}
