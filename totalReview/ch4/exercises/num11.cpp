/*Create a program to find all the prime numbers between 1 and 100. There
is a classic method for doing this, called the “Sieve of Eratosthenes.” If
you don’t know that method, get on the web and look it up. Write your
program using this method.*/
#include <iostream>
#include <vector>

void sieve(int n) {
  std::vector<bool> a (n + 1, true);
  std::vector<int> primes;
   a[0] = a[1] = false;

  //for (int i = 1; i <= n; ++i)
    //a.push_back(i);

  for(int i = 2; i * i < n; ++i) {
    if (a[i]) {
        for(int j = i * i; j <= n; j += i){
            a[j] = false;
        }
    }
  }
  for(int i = 1; i < a.size(); ++i){
      if(a[i]){
          primes.push_back(i);
      }
  }
  for(int x : primes)
      std::cout << x << "\n";
}

int main() {
  int n = 100;
  sieve(n);
}
