#include <iostream>
#include <vector>

/*Write a program that reads and stores a series of integers and then com-
putes the sum of the first N integers. First ask for N, then read the values
into a vector , then calculate the sum of the first N values. For example:
“Please enter the number of values you want to sum:”
3
“Please enter some integers (press ' | ' to stop):”
12 23 13 24 15 |
“The sum of the fi rst 3 numbers ( 12 23 13 ) is 48 .”CHAPTER 5 EXERCISES
Handle all inputs. For example, make sure to give an error message if the
user asks for a sum of more numbers than there are in the vector.*/

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
