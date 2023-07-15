#include <iostream>

void foo(){
    int counter = 0;
    counter++;
    std::cout << "Counter: " << counter << "\n";
}

int main(){
    foo();
    foo();
    foo();
    return 0;
}
