#include <iostream>
#include <stdexcept>

void error(std::string er){
    throw std::runtime_error(er);
}
