#include <iostream>
#include <vector>

int main(){
    char user;
    std::vector<char> letters;
    for(int i = 0; i < 4; i++){
        std::cin >> user;
        letters.push_back(user);
    }
}
