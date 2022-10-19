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

//Print the vector
void print(std::string label, std::vector<int> bunchOfNums) {
  for (int i = 0; i < bunchOfNums.size(); i++) {
    std::cout << label << ":" << bunchOfNums[i] << "\n";
  }
}

void fibonacci(int x, int y, std::vector<int> v, int n) {
  std::string label = "Num";
  int total;
  //Push the first and second user input into vector
  v.push_back(x);
  v.push_back(y);
  total = x + y;

  //For loop = takes the first element and adds it to the second element.
  //pushes that to vector.
  //Takes the second element and adds it to the third element and pushes it.
  //I continues to increment so it takes the third element next and adds it the fourth and pushes and repeats.
  //Reason for i - 1 is the intitial I value is 1 because it iterates till it is equal to n and have 1 made more
  //sense than 0.
  for (int i = 1; i <= n; ++i) {
    total = v[i - 1] + v[i];
    v.push_back(total);
  }
  print(label, v);
}

void intilize() {
  int x, y, n;
  std::cout << "Enter the first and second numbers\n";
  std::cin >> x;
  std::cin >> y;

  std::cout << "Enter the maximum number of numbers\n";
  std::cin >> n;

  std::vector<int> v;
  fibonacci(x, y, v, n);
}

int main() { intilize(); }
