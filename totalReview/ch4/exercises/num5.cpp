/*Make a vector holding the ten string values "zero", "one", . . . "nine".
Use that in a program that converts a digit to its corresponding
spelled-out value; e.g., the input 7 gives the output seven. Have the
sameCHAPTER 4 EXERCISES program, using the same input loop, convert spelled-out
numbers into their digit form; e.g., the input seven gives the output 7.*/

#include <iostream>
#include <vector>

int main() {
  std::vector<std::string> values = {"zero", "one", "two",   "three", "four",
                                     "five", "six", "seven", "eight", "nine"};
  std::vector<int> numbers;
  std::string user;
  std::string spellInput;
  int num;

  for (int i = 0; i < 10; ++i)
    numbers.push_back(i);

  /*for(int x : numbers)
      std::cout << x << "\n";*/

  bool isTrue = true;
  while (isTrue) {
    std::cout << "Enter digit or spell or q to quit\n";
    std::cin >> user;
    if(user == "q")
        exit(0);
    if (user == "digit") {
      std::cin >> num;
      for (int i = 0; i < numbers.size(); ++i) {
        if (num == numbers[i]) {
          std::cout << "You entered " << num << " which is " << values[i]
                    << "\n";
        }

        if (num == 10)
          isTrue = false;
      }
    } else if (user == "spell") {
      std::cout << "Enter a spelled out word\n";
      std::cin >> spellInput;
      for (int i = 0; i < values.size(); ++i) {
        if (spellInput == values[i]) {
          std::cout << spellInput << " becomes " << numbers[i] << "\n";
        }
      }
    }
  }
}
