#include <iostream>
#include <string>

int main() {
    int num1, num2, small, big, sum, difference, product, ratio;
    std::cout << "Enter two numbers: " << "\n";
    std::cin >> num1 >> num2;

    if(num1 > num2){
        small = num2;
        big = num1;
        ratio = num1/num2;
    }else{
        small = num1;
        big = num2;
        ratio = num2/num1;
    }

    sum = num1 + num2;
    product = num1 * num2;
    difference = num1 - num2;

    //print out everything
    std::cout << "smaller number is " << small << " bigger number is " << big << "\n"
        << "Sum is " << sum << "difference is " << difference << "product is " << product << "\n"
        << "ratio is " << ratio << "\n";
}
