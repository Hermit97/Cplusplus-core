#include <iostream>
/*Write a program that writes out the first so many values of the Fibonacci
series, that is, the series that starts with 1 1 2 3 5 8 13 21 34. The next
number of the series is the sum of the two previous ones. Find the largest
Fibonacci number that fits in an int .
*/
int main(){
    int num;
    int oldNum = 1;
    std::cout << "Enter a number\n";
    std::cin >> num;
    //initial value is 1

    std::cout << oldNum << "\n";
    for(int i = 1; i <= num; ++i){
        std::cout << i << "\n";
    }
}
