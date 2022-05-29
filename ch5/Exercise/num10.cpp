#include <cctype>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

/*Modify the program from exercise 8 to use double instead of int . Also,
make a vector of double containing the N–1 differences between adja-
cent values and write out that vector of differences.
*/

const std::string doubleError = "Not an double";
const std::string rangeError = "Out of bounds";

//Check amount of integers
void checkAmount(double n, std::vector<double> nums){
      if(nums.size() > n)
          throw std::runtime_error(rangeError);
}

void checkDouble(double num){
  //If the next character in the input stream is not a white space throw an error
  if(!(std::isspace(std::cin.peek())))
    throw std::runtime_error(doubleError);
}

std::vector<double> getDiff(std::vector<double> nums, std::vector<double> diff){
    double totalDiff;
    for(int i = 0; i < nums.size(); i++){
        totalDiff = nums[i] - nums[i + 1];
        diff.push_back(totalDiff);
    }
    return diff;
}

int main(){
    try{
        std::vector<double> nums;
        std::vector<double> diff;
        double sum = 0;
        double howMany;
        double vectorSize;

        std::cout << "How many numbers\n";
        std::cin >> howMany;

        checkDouble(howMany);

        for(int num; std::cin >> num;)
            nums.push_back(num);

        checkDouble(howMany);

        //Check amount of inputs
        checkAmount(howMany, nums);

        //sum
        for(int i = 0; i < nums.size(); i++){
            sum = nums[i] + sum;
        }

        //print sum
        std::cout << "Sum is " << sum << "\n";
        std::cout << "The size of the vector is " << nums.size() << "\n";

        //Diff vector
        std::vector<double>foundDiff = getDiff(nums,diff);
        //print the diff vector...

    }catch(std::exception &e){
        std::cerr << "Error " << e.what() << "\n";
    }
}
