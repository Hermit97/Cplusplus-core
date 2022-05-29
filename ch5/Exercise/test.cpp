#include <cctype>
#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
  try{
    int num;
    std::cin >> num;
    //if(std::cin >> num && std::isspace(std::cin.peek() ))
    if(!(std::isspace(std::cin.peek()) ))
      throw std::runtime_error("Not an int");

    std::cout << "HUUHUHUH\n";

  }catch(std::exception& e){
    std::cerr << "Error " << e.what() << "\n";
  }
}
