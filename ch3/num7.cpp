#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main() {
    int pennies = 1;
    int nickels = 5;
    int dimes = 10;
    int quarters = 25;
    int halfDollars = 50;
    int oneDollar = 100;
    int total = 0;

    //ask user for input for each kind of coin, pennies nickels etc.
    std::cout << "Enter the amout of pennies, nickels, dimes, quarters, halfDollar, oneDollar\n";
    std::cin >> pennies >> nickels >> dimes >> quarters >> halfDollars >> oneDollar;

    if(dimes < 2)
        std::cout << dimes << " dime \n";
    else
        std::cout << dimes << " dimes \n";

    //get the actual value for each coin
    nickels = nickels * 5;
    dimes = dimes * 10;
    quarters = quarters * 25;
    halfDollars = halfDollars * 50;
    oneDollar = oneDollar * 100;

    //Get the total amount of coins the user entered\n"
    total = pennies + nickels + dimes + quarters + halfDollars + oneDollar;

    //Print the total amout of coins
    std::cout << "The values of all your coins is " << total << " cents\n";

}
