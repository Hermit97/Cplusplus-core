#include "error.h"
#include <cstdlib> // for rand and srand
#include <ctime>
#include <iostream>
#include <vector>

/*Implement a little guessing game called (for some obscure reason) “Bulls
and Cows.” The program has a vector of four different integers in the
range 0 to 9 (e.g., 1234 but not 1122) and it is the user’s task to discover
those numbers by repeated guesses. Say the number to be guessed is 1234
and the user guesses 1359; the response should be “1 bull and 1 cow”
because the user got one digit (1) right and in the right position (a bull)
and one digit (3) right but in the wrong position (a cow). The guessing
continues until the user gets four bulls, that is, has the four digits correct
and in the correct order.*/

std::vector<int> integers() {
  std::vector<int> num;
  int i = 0;
  int randNum;
  std::srand(std::time(0));
  // int randnum = (rand() % 10) + 1;
  while (i < 4) {
    randNum = (rand() % 10) + 1;
    num.push_back(randNum);
    ++i;
  }

  std::cout << "The original vector is \n";
  for(int i : num)
      std::cout << i;
  std::cout << "\n";

  //check for num
  for(int i = 0; i < num.size(); ++i){
      for(int j = 1; j < num.size(); ++j){
          if(num[i] == num[j]){
            //if the element position is the same then ignore it.
            if(i == j)
                continue; //restart the loop since they are in the same spot and are not an actual double
            std::cout << "Double found at " << num[i] << " and " << num[j] << "\n";

          }
      }
  }
  
  return num;
}

void run(){
    integers();
}

/*void check_double() {
  for (int i = 0; i < integers().size(); ++i) {
    for (int j = 1; j < integers().size(); ++j) {
      int k = 0;
      while(k < 4){
	if(k == 3)
	  std::exit(0);
	    if(integers()[i] == integers()[j]){
        std::cout << "Double found:" << integers()[i] << " and "
                  << integers()[j] << "\n";
        integers()[j] = (rand() % 10) + 1;
        std::cout << "Changed it, now its\n";
        for (int i : integers())
          std::cout << i << " ";
        // reset i
        i = 0;
	    }
	    ++k;
      }
    }
  }
  }*/

int main() {
  // for(int i : integers())
  // std::cout << i << " " << "\n";
  run();
  return 0;
}
