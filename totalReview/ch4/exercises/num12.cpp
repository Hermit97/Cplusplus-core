#include <cctype>
#include <iostream>
#include <vector>

/*Write a program that takes an input value n and then finds the first n
primes.*/

// takes n input
// starts at 2, 1 is false;
// takes multiples of 2 as false;
// 2 is prime and so is the next number that is not false.
// it then checks if that numbers multiples are primes.

bool isPrime(int n) {

  for (int i = 2; i < n; ++i) {
    if (n % i == 0)
        return false;
  }
  return true;
}

int main() {
  std::vector<int> num;
  int n;
  std::cout << "Enter n ";
  std::cin >> n;

  int check_prime = 3;

  while (check_prime <= n) {
    if (isPrime(check_prime))
      num.push_back(check_prime);
    ++check_prime;
  }

  for (int x : num)
    std::cout << x << "\n";
}
