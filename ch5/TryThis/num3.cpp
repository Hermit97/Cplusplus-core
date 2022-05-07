#include <exception>
#include <iostream>
#include <stdexcept>

void error(std::string s){
    throw std::runtime_error(s);
}

int main(){
    std::string who = "Hello\n";
    error(who);
}
