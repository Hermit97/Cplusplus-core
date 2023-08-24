/*Create a program to find all the prime numbers between 1 and 100. There
is a classic method for doing this, called the “Sieve of Eratosthenes.” If
you don’t know that method, get on the web and look it up. Write your
program using this method.*/
#include <iostream>
#include <vector>

std::vector<int> nums = {2}; //First prime

bool Sieve_of_eratosthenes_algo(std::vector<int> num){
    for(int x : nums){
        nums[x] + 2;
    }
    return true;
}
int main(){
    std::vector<int> nums = {2}; //First prime
}
