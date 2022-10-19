/*Create a vector of Fibonacci numbers and print them using the function
from exercise 2. To create the vector , write a function, fibonacci(x,y,v,n) ,
where integers x and y are int s, v is an empty vector<int> , and n is the
number of elements to put into v ; v[0] will be x and v[1] will be y . A Fibo-
nacci number is one that is part of a sequence where each element is the
sum of the two previous ones. For example, starting with 1 and 2, we get
1, 2, 3, 5, 8, 13, 21, . . . . Your fibonacci() function should make such a
sequence starting with its x and y arguments.
*/

#include <iostream>
#include <stdlib.h>
#include <vector>

void print(std::string label, std::vector<int> bunchOfNums) {
  for (int i = 0; i < bunchOfNums.size(); i++) {
    std::cout << label << ":" << bunchOfNums[i] << "\n";
  }
}

void fibonacci(int x, int y, std::vector<int> v, int n) {
  std::string label = "Num";
  // std::cout << "Enter a number for x and y range\n";
  // Fib written here
  int fib;
  std::vector<int> totalFib;
  v.push_back(x);

  for (int i = x; i <= y; ++i) {
    // this part below does not make sense because x and y are used in the for
    // loop for the range
    int before;
    int after;
    before = i;
    after = i + 1;
    fib = before + after;
    // totalFib.push_back(fib);
    v.push_back(fib);
  }

  print(label, v);

  // print new fib function
  for (int i = 0; i < totalFib.size(); ++i) {
    std::cout << totalFib[i] << "\n";
  }
}

void intilize() {
  int x, y, n;
  std::cout << "Enter a number for x and y range\n";
  std::cin >> x;
  std::cin >> y;
  std::vector<int> v;

  // what does n = ?

  fibonacci(x, y, v, n);
}

int main() { intilize(); }
