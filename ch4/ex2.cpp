#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    int num = 1;

    while(num <= 25){
      std::cout << char('a' + num) << "\t" <<  int('a' + num) << "\n";
      ++num;
    }
}
