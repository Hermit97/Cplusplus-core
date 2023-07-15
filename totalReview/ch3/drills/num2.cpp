#include <iostream>
#include <string>

//Pretty much the same as number 1.
int main(){
    std::string first_name, last_name;

    std::cout << "Please enter your first and last name: \n";
    std::cin >> first_name >> last_name;

    std::cout << "Dear " << first_name << ", " << last_name << "\n";
}
