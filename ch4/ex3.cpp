#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
  for(int i = 0; i <= 25; i++){
    std::cout << char('a' + i) << "\t" <<  int('a' + i) << "\n";
  }

   for(int i = 0; i <= 25; i++){
    std::cout << char('A' + i) << "\t" <<  int('A' + i) << "\n";
  }
}
