#include <cctype>
#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>


/*Write a program that takes an input value n and then finds the first n
primes.*/

int main(){
    int n;
    std::vector<int> primes;
    bool isPrime = true;
    std::cin >> n;


    //n = 10
    for(int i = 2; i <= n; i++){
        isPrime = true;
        for(int j  = 2; j < i / 2; j++){
            if(i % j == 0){
                isPrime = false;
                break;
            }
        }

        if(isPrime)
            std::cout << i << "\n";

    }

}
