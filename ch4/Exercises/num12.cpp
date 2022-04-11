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
    int num = 50;
    bool isPrime = true;
    //std::cin >> num;
    int A[100] = {0};

    for(int i = 2; i * i <= num; i++){
        for(int j = i * i; j <= num; j+=i){
            A[j - 1] = 1;
        }
    }

    for(int p = 2; p < num; p++){
        if(A[p - 1] == 0)
            std::cout << p << "\n";
    }
}
