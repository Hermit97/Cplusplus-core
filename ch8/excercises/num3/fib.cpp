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
  std::cout << "Enter a number or q to quit\n";
  std::string quit;
  while (std::cin) {
    std::cin >> quit;
    if (quit == "q")
      break;
    else {
      int num = atoi(quit.c_str());
      bunchOfNums.push_back(num);
    }
  }

  for (int i = 0; i < bunchOfNums.size(); i++) {
    std::cout << label << ":" << bunchOfNums[i] << "\n";
  }
}

