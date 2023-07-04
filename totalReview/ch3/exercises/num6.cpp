#include <iostream>
#include <string>

/*Write a program that prompts the user to enter three integer values, and
then outputs the values in numerical sequence separated by commas. So,
if the user enters the values 10 4 6, the output should be 4, 6, 10. If two
values are the same, they should just be ordered together. So, the input
4 5 4 should give 4, 4, 5*/

int main(){
    int num1, num2, num3, small, mid, large;

    std::cout << "Enter 3 numbers\n";
    std::cin >> num1 >> num2 >> num3;

    //Put numbers in numerical sequence
    if(num1 > num2 && num1 > num3 && num2 > num3 && num3 < num2 && num3 < num1){
        large = num1;
        mid = num2;
        small = num3;
        std::cout << "HI\n";
    }

    if(num2 > num1 && num2 > num3 && num3 > num1 && num1 < num2 && num1 < num3){
        large = num2;
        mid = num3;
        small = num1;
    }

    if(num3 > num1 && num3 > num2 && num1 > num2 && num2 < num1 &&  num2 < num1){
        large = num3;
        mid = num1;
        small = num2;
    }

    if(num2 > num1 && num2 > num3 && num1 > num3 && num3 < num2 && num3 < num1){
        large = num2;
        mid = num1;
        small = num3;
    }

    std::cout << "Large = " << large << " mid = " << mid << " small = " << small;
}
