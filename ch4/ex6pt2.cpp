#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    std::vector<std::string> disliked;
    std::string test;
    int num;
    int count = 0;

    //Get the disliked values inside a vector
    std::cout << "Enter a word\n";
    for(std::string word; std::cin >> word;){
        disliked.push_back(word);

        if(word == "q"){
            disliked.pop_back();
            break;
        }
    }

    std::cout << "The vector is: \n";
    //Print the vector
    for(int i = 0; i < disliked.size(); ++i){
        std::cout << disliked[i] << "\n";
    }

    //Let input continue ill user enters q
    std::cout << "Enter how many times you want this to run\n";
    std::cin >> num;

    while(count <= num){

            //get a word to test against the vector
            std::cout << "Enter a word to test\n";
            std::cin >> test;

            auto it = std::find(disliked.begin(), disliked.end(), test);

            if(it == disliked.end()){
                std::cout << "Does not match any values int he array\n";
            }else{
                std::cout << "bleep\n";
            }

        ++count;
    }

}
