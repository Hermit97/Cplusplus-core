#include <cctype>
#include <iostream>
#include <string>
#include <system_error>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdlib>
#include <limits>

/*Write a program that plays the game “Rock, Paper, Scissors.” If you are not
familiar with the game do some research (e.g., on the web using Google).
Research is a common task for programmers. Use a switch -statement to
solve this exercise. Also, the machine should give random answers (i.e.,
select the next rock, paper, or scissors randomly). Real randomness is too
hard to provide just now, so just build a vector with a sequence of values
to be used as “the next value.” If you build the vector into the program,
it will always play the same game, so maybe you should let the user en-
ter some values. Try variations to make it less easy for the user to guess
which move the machine will make next.*/



int main(){

    std::vector<char> randomValues;

    char user;

    //User enters random computer rock paper scissors values into vector
    std::cout << "Enter random values like r, s, p\n";
    for(char npcValues; std::cin >> npcValues;){
        randomValues.push_back(npcValues);
        if(npcValues == '|')
            break;
        break;
    }

    //User enters value to test against computer vector
    std::cout << "Enter either r s or p\n";
    std::cin >> user;

    switch (user) {
        case 'r' :
            for(int i = 0; i < randomValues.size(); i++){
                if(randomValues[i] == 's'){
                    std::cout << "User wins, computer losses\n";
                }else if(randomValues[i] == 'p')
                    std::cout << "User losses, computer wins\n";

                break;
            }

        case 's' :
            for(int i = 0; i < randomValues.size(); i++){
                if(randomValues[i] == 'r'){
                    std::cout << "User losses, computer wins\n";
                }else if(randomValues[i] == 'p')
                    std::cout << "User wins, computer losses\n";

                break;
            }

        case 'p' :
            for(int i = 0; i < randomValues.size(); i++){
                if(randomValues[i] == 'r'){
                    std::cout << "User wins, computer losses\n";
                }else if(randomValues[i] == 's')
                    std::cout << "User losses, computer wins\n";

                break;

            }
    }

}
