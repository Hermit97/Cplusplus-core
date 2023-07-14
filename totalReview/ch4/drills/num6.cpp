#include <iostream>
#include <vector>

bool almost_equal(double num1, double num2, double temp){
    double diff = num1 - num2;

    if(diff < temp)
        diff = -diff;

    return diff < temp;
}
int main(){
    double num, largest, smallest;
    while(std::cin >> num){
        std::cout << num1 << "," << num2 << "\n";

   if(num1 > num2)
        std::cout << "num1 is bigger and num2 is smaller" << "\n";
    if(num1 < num2)
        std::cout << "num2 is bigger and num1 is smaller" << "\n";
    else if(num1 == num2)
        std::cout << "They are equal\n";

    if(almost_equal(num1,num2, 0.01))
        std::cout << "The numbers are almost equal\n";
    else
        std::cout << "The numbers do not differ by less than 0.01\n";

    }
    return 0;
}
