#include <iostream>
#include <stdexcept>

void error(std::string s){
  throw std::runtime_error(s);
}
