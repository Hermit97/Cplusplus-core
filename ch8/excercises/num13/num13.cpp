/*Write a function that takes a vector<string> argument and returns a
vector<int> containing the number of characters in each string . Also
find the longest and the shortest string and the lexicographically first and
last string . How many separate functions would you use for these tasks?
Why?*/

#include <iostream>
#include <vector>

void getStringVector(std::vector<std::string> &v){
    std::string input;
    for(int i = 0; i < v.size(); ++i){
        std::cin >> input;
        if(input == "q")
            return;
        v.push_back(input);
    }
}

void getVectorCharacterSize(std::vector<string> &v){
    for(int i = 0; i < v.size(); ++i){

    }
}

int main(){
    std::vector<int> numbers;
    std::vector<std::string> characters;
}
