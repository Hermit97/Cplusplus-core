#include <cctype>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

//Creates and gives vector values
std::vector<std::string> numValues = {
        "zero",
        "one",
        "two",
        "three",
        "four",
        "five",
        "six",
        "seven",
        "eight",
        "nine",
};

int number() {
  int num1 = numValues.size();
  std::string s;

  if(std::cin >> num1){
    std::cout << "You entered " << num1 << "\n";
  }else{
    std::cin.clear();
    std::cin >> s;

    for(int i = 0; i < numValues.size(); i++){
      if(s == numValues[i])
        num1 = i;
    }
    //std::cout << num1 << "\n";
  }
  return num1;
}

int main() {
  int val1, val2;
  char op;

  val1 = number();

  std::cin >> op;
  while(op != '+' && op != '=' && op != '*' && op != '/'){
    std::cout << "Invalid ops\n";
    std::cin.clear();
    std::cin >> op;
  }

  val2 = number();

  if(op == '+')
    std::cout << val1 + val2 << "\n";

}
