/*Create a program to find all the prime numbers between 1 and 100. There
is a classic method for doing this, called the “Sieve of Eratosthenes.” If
you don’t know that method, get on the web and look it up. Write your
program using this method.*/
#include <iostream>
#include <vector>

std::vector<int> nums; //first prime
std::vector<int> primes;

void fill_vector(){
    for(int i = 1; i <= 100; ++i)
        nums.push_back(i);
}
void Sieve_of_eratosthenes_algo(std::vector<int> num){
    int count = 2;
    fill_vector();

    for(int x : nums){ // maybe use the normal for loop styule instead so it iterates to 3 after 2 to get its multiples
        if(x % count == 0)
            primes.push_back(x);
        ++count;
    }
}
int main(){
    Sieve_of_eratosthenes_algo(nums);
    for(int x : primes)
        std::cout << x << "\n";
    std::cout << "---------------------------------------------------------------------------\n";

    for(int y : nums)
        std::cout << y << "\n";

}
