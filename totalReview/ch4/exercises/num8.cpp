/*Write a program that plays the game “Rock, Paper, Scissors.” If you are not
familiar with the game do some research (e.g., on the web using Google).
Research is a common task for programmers. Use a switch-statement to
solve this exercise. Also, the machine should give random answers (i.e.,
select the next rock, paper, or scissors randomly). Real randomness is too
hard to provide just now, so just build a vector with a sequence of values
to be used as “the next value.” If you build the vector into the program,
it will always play the same game, so maybe you should let the user en-
ter some values. Try variations to make it less easy for the user to guess
which move the machine will make next.*/
#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<std::string> cpu_moves;
    int moves = 0;
    int move = 0;
    int count = 0;
    int user;
    int user_points = 0;
    int cpu_points = 0;
    int cpu_turn;
    bool gamePlaying = true;
    std::cout << "Welcome to Rock Paper Scissors!\n";
    std::cout << "Enter 0 for Rock \nEnter 1 for Paper \nEnter 2 for Scissors\n";

    while(std::cin >> moves){
        if(moves == 0)
            cpu_moves.push_back("Rock");
        else if(moves == 1)
            cpu_moves.push_back("Paper");
        else if(moves == 2)
            cpu_moves.push_back("Scissors");
        else{
            std::cout << "Invalid input try again\n";
            --count;
        }
        ++count;
        if(count == 3)
            break;
    }

    //print out vector
    for(std::string x : cpu_moves)
        std::cout << x << "\n";

    std::cout << "Player vs computer!!! Begin by entering\n";
    std::cout << "Enter 0 for Rock \nEnter 1 for Paper \nEnter 2 for Scissors\n";
    //start of game
    while(gamePlaying){
        ++move;
        if(move > 3)
            break;
        std::cout << "Enter a number user\n";
        std::cin >> user;

        switch(user){
            case 0:
                if(cpu_moves[0] == "Rock"){
                    std::cout << "Try again Rock cancels out Rock.\n";
                    --move;
                    break;
                }else if(cpu_moves[1] == "paper"){
                    std::cout << "Cput won this round\n";
                    ++cpu_points;
                    break;
                }
        }

    }

    if(cpu_points > user_points)
        std::cout << "CPU WON\n";
    else
        std::cout << "USER WON\n";
}
