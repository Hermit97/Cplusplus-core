#include <iostream>

int get(){
    int n;
    std::cout << "Enter a num\n";
    std::cin >> n;

    return n;
}

int main(){
    int s = get();

    std::cout << s << "\n";
}