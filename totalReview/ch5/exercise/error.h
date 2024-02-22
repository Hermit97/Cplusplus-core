#include <iostream>
#include <stdexcept>

void error(std::string s1){
  throw std::runtime_error(s1);
}
