#include <cctype>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

/*Modify the program from exercise 8 to write out an error if the result
cannot be represented as an int .*/

const std::string intError = "Not an int";
const std::string rangeError = "Out of bounds";

// Check amount of integers
void checkAmount(int n, std::vector<int> nums) {

  if (nums.size() > n)
    throw std::runtime_error(rangeError);
}

void checkInt(int num) {
  // If the next character in the input stream is not a white space throw an error
  if (!(std::isspace(std::cin.peek())))
    throw std::runtime_error(intError);
}

int main() {
  try {
    std::vector<int> nums;
    int sum = 0;
    int howMany;
    int vectorSize;

    std::cout << "How many numbers\n";
    std::cin >> howMany;
    if (howMany == 0)
      exit(0);

    checkInt(howMany);

    for (int num; std::cin >> num;)
      nums.push_back(num);

    if(!std::cin.eof()){
      std::cin.clear();
      char end = ' ';
      std::cin >> end;
      if(end != '|')
        throw std::runtime_error(intError);
    }

    // Check amount of inputs
    checkAmount(howMany, nums);

    // sum
    for (int i = 0; i < nums.size(); i++) {
      sum = nums[i] + sum;
    }

    // print sum
    std::cout << "Sum is " << sum << "\n";
    std::cout << "The size of the vector is " << nums.size() << "\n";

  } catch (std::exception &e) {
    std::cerr << "Error " << e.what() << "\n";
  }
}
