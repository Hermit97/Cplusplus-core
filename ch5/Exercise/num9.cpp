#include <iostream>
#include <vector>

/*Modify the program from exercise 8 to write out an error if the result
cannot be represented as an int .*/

//Check amount of integers
void checkAmount(int n, std::vector<int> nums){
    //for(int i = 0; i < nums.size(); i++){
        if(nums.size() > n)
            throw nums;
    //}
}

int main(){
    try{
        std::vector<int> nums;
        int sum = 0;
        int howMany;
        int vectorSize;

        std::cout << "How many numbers\n";
        std::cin >> howMany;

        for(int num; std::cin >> num;)
            nums.push_back(num);

        //Check amount of inputs
        checkAmount(howMany, nums);

        //sum
        for(int i = 0; i < nums.size(); i++){
            sum = nums[i] + sum;
        }

        //print sum
        std::cout << "Sum is " << sum << "\n";
        std::cout << "The size of the vector is " << nums.size() << "\n";
    }catch(std::vector<int> nums){
        std::cout << "Out of range\n";
    }
}
