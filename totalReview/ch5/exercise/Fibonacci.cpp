#include "error.h"
#include <iostream>

/*Write a program that writes out the first so many values of the Fibonacci
series, that is, the series that starts with 1 1 2 3 5 8 13 21 34. The next
number of the series is the sum of the two previous ones. Find the largest
Fibonacci number that fits in an int .

ALGO

old = 1
while(true)
current = 1

*/

/*oldNum(oldvalue) + newNum (newvalue) repeat
 newvalue then it becomes old value the new value is old value plus
 currentvalue*/
int main() {
  int starter_num = 1;
  int fib;
  int previous = 0;
  int current = 1;
  std::cout << starter_num << "\n";
  int i = 1;
  try{
  while (true) {
      fib = current + previous;
      if(fib < 0)
	  throw std::overflow_error("Overflow occured");
      std::cout << i << ":" << fib << "\n";
      previous = current;
      current = fib;
      ++i;
  }
  }

  catch (std::overflow_error &e) {
      std::cerr << "Overflow error" << e.what() << "\n";
  }
}

