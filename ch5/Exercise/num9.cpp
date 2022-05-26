#include <cctype>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

/*Modify the program from exercise 8 to write out an error if the result
cannot be represented as an int .*/

const std::string intErrorMsg = "Entered input is not an int";
const std::string rangError = "Out of range";
const std::vector<int> nums;

// Check amount of integers
void checkAmount(int n, std::vector<int> nums) {
  if (nums.size() > n)
    throw std::runtime_error(rangError);
}

// Check for int inputs
void checkInt(int x) {
  if (!std::cin >> x)
    throw std::runtime_error(intErrorMsg);
}

int main() {
  try {
    std::vector<int> nums;
    int sum = 0;
    int howMany;
    int vectorSize;

    std::cout << "How many numbers\n";
    std::cin >> howMany;

    for (int num; std::cin >> num;){
      //checkInt(num);
      nums.push_back(num);
      checkInt(num);
    }

    //Check if its an int
    //checkInt(num);

    // Check amount of inputs
    checkAmount(howMany, nums);

    // sum
    for (int i = 0; i < nums.size(); i++) {
      sum = nums[i] + sum;
    }

    // print sum
    std::cout << "Sum is " << sum << "\n";
    std::cout << "The size of the vector is " << nums.size() << "\n";
  //} catch (std::vector<int> nums) {
  } catch (std::exception& e) {
    std::cerr << "Error: " << e.what() << "\n";
    return 1;
  }catch(...){
    std::cerr << "Unexpected error";
    return 2;
  }
}
