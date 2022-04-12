#include <cctype>
#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*In the drill, you wrote a program that, given a series of numbers, found
the max and min of that series. The number that appears the most times
in a sequence is called the mode. Create a program that finds the mode of
a set of positive integers.*/

int main(){
    int max, min, temp;
    std::vector<int> num;

    //Enter and print series of numbers
    for(int nums; std::cin >> nums;){
        num.push_back(nums);
    }

    std::cout << "Unsorted:\n";
    for(int i = 0; i < num.size(); i++)
        std::cout << num[i] << "\n";

    //Sort the numbers from lowest to greatest without sort()
    for(int i = 0; i < num.size(); i++){
        for(int j = i + 1; j < num.size(); j++){
            //Check if i + 1 is bigger than i, if so swap them other wise move on
            if(num[j] > num[i]){
            //std::swap(num[i+1], num[i]);
                temp = num[j];
                num[j] = num[i];
                num[i] = temp;
            }
        }

    }

    std::cout << "Sorted:\n";
    for(int i = 0; i < num.size(); i++)
        std::cout << num[i] << "\n";
}
