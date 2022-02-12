#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    int num1, num2, sum, diff, product, ratio;

    std::cout << " Enter two int numbers \n";
    std::cin >> num1 >> num2;

    if(num1 > num2){
        std::cout << "num1 is bigger than num2 \n";
    }else{
        std::cout << "num2 is bigger than num2\n";
    }

    sum = num1 + num2;
    diff = num1 - num2;
    product = num1 * num2;
    ratio = num1 % num2;

    std::cout << "Sum is " << sum << "\n"
              << "diff is " << diff << "\n"
              << "product is " << product << "\n"
              << "ratio is " << ratio << "\n";



}
