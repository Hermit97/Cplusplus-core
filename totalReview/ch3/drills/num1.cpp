#include <iostream>
#include <string>

int main(){
    std::string first_name, last_name;

    std::cout << "Please enter your first and last name: \n";
    std::cin >> first_name >> last_name;

    std::cout << "Dear " << first_name << ", " << last_name << "\n";
}
