#include <cctype>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

/*Modify the program from exercise 8 to write out an error if the result
cannot be represented as an int .*/

// CREATE A FUNCTION FOR GETTING INPUT FOR VECTOR. INSIDE OF THE FUNCTION CHEK
// FOR NON INT INPUT

const std::string intErrorMsg = "Entered input is not an int";
const std::string rangError = "Out of range";
const std::vector<int> nums;

// Check amount of integers
void checkAmount(int n, std::vector<int> nums) {
  if (nums.size() > n)
    throw std::runtime_error(rangError);
}

// Check for int inputs
void fillVector(std::vector<int> nums) {
  for (int num; std::cin >> num;)
    nums.push_back(num);
   // if (!std::cin)
     // throw std::runtime_error(intErrorMsg);

}

// get sum
int getSum(std::vector<int> nums) {
  int sum;
  for (int i = 0; i < nums.size(); i++) {
    sum = nums[i] + sum;
  }
  return sum;
}

int main() {
  try {
    // std::vector<int> nums;
    int sum;
    int howMany;

    std::cout << "How many numbers\n";
    std::cin >> howMany;
    if (!std::cin)
      throw std::runtime_error(intErrorMsg);

    // get input for vector
    fillVector(nums);

    // Check amount of inputs
    checkAmount(howMany, nums);

    // sum
    sum = getSum(nums);

    // print sum
    std::cout << "Sum is " << sum << "\n";
    std::cout << "The size of the vector is " << nums.size() << "\n";
    //} catch (std::vector<int> nums) {
  } catch (std::exception &e) {
    std::cerr << "Error: " << e.what() << "\n";
  } catch (...) {
    std::cerr << "Unexpected error";
  }
}
