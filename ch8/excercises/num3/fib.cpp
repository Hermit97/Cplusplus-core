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
  std::cout << "Enter a number or q to quit\n";
  std::string quit;
  while (std::cin) {
    std::cin >> quit;
    if (quit == "q")
      break;
    else {
      int num = atoi(quit.c_str());
      v.push_back(num);
    }
  }

  //Fib written here
  int fib;
  std::vector<int> totalFib;
  for(int i = 0; i < v.size(); ++i){
      x = v[i];
      y = v[i + 1];
      fib = x + y;
      totalFib.push_back(fib);
  }
  
  print(label, v);

  //print new fib function
  for(int i = 0; i < totalFib.size(); ++i){
      std::cout << totalFib[i] << "\n";
  }
}

void intilize() {
  int x, y, n;
  x = 1;
  y = 2;
  std::vector<int> v;
  n = 23;

  fibonacci(x, y, v, n);
}

int main() { intilize(); }
