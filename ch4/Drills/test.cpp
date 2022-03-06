#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main()
{
    double smallestSoFar;
    double largestSoFar;
    double a,differ=0;
    char c=' ';
    cout << "Enter value: \n";

    while (c != '|' && cin >> a)
    {
        if (a > largestSoFar)
        {
            largestSoFar = a;
            cout <<"Largest so far is: "<< largestSoFar << endl;
        }
        else if (a < smallestSoFar)
        {
            smallestSoFar = a;
            cout <<"Smallest so far is: "<< smallestSoFar << endl;
        }
        else if(smallestSoFar >= a && a<=largestSoFar)
            cout << a << endl;
        cout << "Enter a character | to break loop: \n";
        cin >> c;
    }
    cout << "You have exited the loop.\n";
}
