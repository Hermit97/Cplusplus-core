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
  int a = 10;
  int b = 20;
  int temp;

  temp = a;
  a = b;
  b = temp;

  std::cout << "a:" << a << "\n" << "b:" << b << "\n";
}
