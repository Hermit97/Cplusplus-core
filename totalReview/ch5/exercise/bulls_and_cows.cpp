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

std::vector<int> num;
// std::vector<int> integers() {
void integers() {
  int i = 0;
  int randNum;
  std::srand(std::time(0));
  // int randnum = (rand() % 10) + 1;
  while (i < 4) {
    randNum = (rand() % 10);
    num.push_back(randNum);
    ++i;
  }

  std::cout << "The original vector is \n";
  for (int i : num)
    std::cout << i << " ";
  std::cout << "\n";

  // check for num
  for (int i = 0; i < num.size(); ++i) {
    for (int j = 1; j < num.size(); ++j) {
      if (num[i] == num[j]) {
        // if the element position is the same then ignore it.
        if (i == j)
          continue; // restart the loop since they are in the same spot and are
                    // not an actual double

        // If double is found
        //std::cout << "Double found at " << num[i] << " and " << num[j] << "\n";
        num[j] = (rand() % 10);
	i = 0; //reset i
      }
    }
  }

  std::cout << "After checking for doubles the vector is now\n";
  for (int i : num)
    std::cout << i << " ";
  std::cout << "\n";
  // use to be return num here
}
/*v = 1 2 3 4, g1 = 1 , or should it just be one g since its 1 user and 1
 * input?? so like g = 1, 0 bull 1 cow since wrong spot but the number is in
 * vector. */

void check_input(int n1, int n2, int n3, int n4){
  std::cin >> n1 >> n2 >> n3 >> n4;

  while(std::cin >> n1 >> n2 >> n3 >> n4){
    if(!std::cin)
      error("Non int entered\n");
    
  }

}

void guess() {
  std::cout << "start\n";
  int g1, g2, g3, g4;
  int bull = 0;
  int cow = 0;

   while (bull < 4) {
    std::cin >> g1 >> g2 >> g3 >> g4;


      if (g1 == num[0])
          ++bull;
      else{
	  for(int i = 0; i < num.size(); ++i){
	      if(g1 == num[i])
		  ++cow;
	  }
      }

      // do the same for g2 g3 g4
      if (g2 == num[1])
	  ++bull;
      else{
	  for(int i = 0; i < num.size(); ++i){
	      if(g2 == num[i])
		  ++cow;
	  }
      }

      if (g3 == num[2])
          ++bull;
      else{
	  for(int i = 0; i < num.size(); ++i){
	      if(g3 == num[i])
		  ++cow;
	  }
      }

      if (g4 == num[3])
          ++bull;
      else{
	  for(int i = 0; i < num.size(); ++i){
	      if(g4 == num[i])
		  ++cow;
	  }
      }

    std::cout << "You entered " << bull << " bulls and " << cow << " cows\n";
    if(bull < 4){
	bull = 0;
	cow = 0;
    }
   }
      /*for (int i = 0; i < num.size(); ++i) {
      if (g1 == num[i])
        if (i == 0) {
          ++bull;
          continue;
        } else {
          ++cow;
          continue;
        }
      else{
	++cow;
	continue;
      }

      // do the same for g2 g3 g4
      if (g2 == num[i])
        if (i == 1) {
          ++bull;
          continue;
        } else {
          ++cow;
          continue;
        }
      else{
	++cow;
	continue;
      }

      if (g3 == num[i])
        if (i == 2) {
          ++bull;
          continue;
        } else {
          ++cow;
          continue;
        }
      else{
	++cow;
	continue;
      }

      if (g4 == num[i])
        if (i == 3) {
          ++bull;
          continue;
        } else {
          ++cow;
          continue;
        }
      else{
	++cow;
	continue;
	}*/
    //}

//std::cout << "You entered " << bull << " bulls and " << cow << " cows\n";
//}
}

void run() {
  integers();
  guess();
}

int main() {
  // for(int i : integers())
  // std::cout << i << " " << "\n";
  run();
  return 0;
}
