#include <iostream>

void error(std::string errorMessage){
  std::cout << errorMessage;
}

int main(){
    double x;
    std::cin >> x;
    double c = (x - 32) * .5556;
    std::cout << "f to c is " << c << "\n";
}
