/*An int can hold integers only up to a maximum number. Find an approx-
imation of that maximum number by using fibonacci().*/

#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

void print(std::string& label, std::vector<int>& bunchOfNums) {

  int it = 1;
  for (int i = 0; i < bunchOfNums.size(); i++) {
    std::cout << label  << it <<  ":" << bunchOfNums[i] << "\n";
    ++it;
  }
}

int fibonacci(int& x, int& y, std::vector <int>& v, int& n) {
  std::string label = "Num";
  int total;
  //Push the first and second user input into vector
  int max;
  v.push_back(x);
  v.push_back(y);
  total = x + y;
  int i;
  try{
  for (i = 1; i < n - 1; ++i) {
    total = v[i - 1] + v[i];
    if(total < y)
        throw std::overflow_error{"Fibonacci() Overflow detected!\n"};
    v.push_back(total);
  }
  }catch(const std::exception &e){
    std::cerr << e.what() << "\n\n";
    max = i;
  }

  //Biggest int number
  print(label, v);
  return max;
}

void intilize() {
  int x, y, n;
  std::cout << "Enter the first and second numbers\n";
  std::cin >> x;
  std::cin >> y;

  std::cout << "Enter the maximum number of numbers\n";
  std::cin >> n;

  std::vector<int> v;
  int max = fibonacci(x, y, v, n);

  std::cout << "Max number is " << max << "\n";
}

int main(){
    intilize();

}
