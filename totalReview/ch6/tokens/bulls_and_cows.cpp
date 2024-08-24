#include "error.h"
#include <algorithm>
#include <cstdlib> // for rand and srand
#include <ctime>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>
#include <random>

/*Implement a little guessing game called (for some obscure reason) “Bulls
and Cows.” The program has a vector of four different integers in the
range 0 to 9 (e.g., 1234 but not 1122) and it is the user’s task to discover
those numbers by repeated guesses. Say the number to be guessed is 1234
and the user guesses 1359; the response should be “1 bull and 1 cow”
because the user got one digit (1) right and in the right position (a bull)
and one digit (3) right but in the wrong position (a cow). The guessing
continues until the user gets four bulls, that is, has the four digits correct
and in the correct order.*/

//std::vector<int> num;
std::vector<char> letters;
std::vector<char> rand_letters;
std::random_device rd;
std::mt19937 g(rd());

// std::vector<int> integers() {
void integers() {
  int i = 0;
  //int randNum;
  //std::srand(std::time(0));
  // int randnum = (rand() % 10) + 1;
  /*while (i < 4) {
    randNum = (rand() % 10);
    num.push_back(randNum);
    ++i;
	}*/

  //input letters into vector
  letters.clear();
  for(char letter = 'a'; letter <= 'z'; ++letter)
	  letters.push_back(letter);
	  

  std::cout << "The original vector is \n";
  for (char i : letters)
	  std::cout << i << " ";
  std::cout << "\n";

  //random vector
  std::shuffle(letters.begin(), letters.end(), g);
  for(int i = 0; i <= 3; i++){
	  rand_letters.push_back(letters[i]);
  }

  std::cout << "Random vector is\n";
  for (char i : rand_letters)
	  std::cout << i << " ";
  std::cout << "\n";

  // check for duplicate letter 
  /*for (int i = 0; i < rand_letters.size(); ++i) {
    for (int j = 1; j < rand_letters.size(); ++j) {
      if (rand_letters[i] == rand_letters[j]) {
        // if the element position is the same then ignore it.
        if (i == j)
          continue; // restart the loop since they are in the same spot and are
                    // not an actual double

        // If double is found
         std::cout << "Double found at " << num[i] << " and " << num[j] << "\n";
        num[j] = (rand() % 10);
        i = 0; // reset i
      }
    }
  }

  std::cout << "After checking for doubles the vector is now\n";
  for (int i : num)
    std::cout << i << " ";
	std::cout << "\n";*/
  // use to be return num here
}
/*v = 1 2 3 4, g1 = 1 , or should it just be one g since its 1 user and 1
 * input?? so like g = 1, 0 bull 1 cow since wrong spot but the number is in
 * vector. */
void check_input(char n1, char n2, char n3, char n4) {
  bool isTrue = true;
  while (isTrue) {
    std::cin >> n1;
    if (!std::cin)
      error("Non char entered\n");

    std::cin >> n2;
    if (!std::cin)
      error("Non char entered\n");

    std::cin >> n3;
    if (!std::cin)
      error("Non char entered\n");

    std::cin >> n4;
    if (!std::cin)
      error("Non char entered\n");
    isTrue = false;
  }
}

void guess() {
  std::cout << "start\n";
  char g1, g2, g3, g4;
  int bull = 0;
  int cow = 0;

  while (bull < 4) {
    // std::cin >> g1 >> g2 >> g3n >> g4;
    // check_input(g1, g2, g3, g4);
    //  std::cin >> g1 >> g2 >> g3 >> g4;
    std::cin >> g1;
    if (!std::cin)
      error("Non int entered\n");

    std::cin >> g2;
    if (!std::cin)
      error("Non int entered\n");

    std::cin >> g3;
    if (!std::cin)
      error("Non int entered\n");

    std::cin >> g4;
    if (!std::cin)
      error("Non int entered\n");

    if (g1 == rand_letters[0])
      ++bull;
    else {
      for (int i = 0; i < rand_letters.size(); ++i) {
        if (g1 == rand_letters[i])
          ++cow;
      }
    }

    // do the same for g2 g3 g4
    if (g2 == rand_letters[1])
      ++bull;
    else {
      for (int i = 0; i < rand_letters.size(); ++i) {
        if (g2 == rand_letters[i])
          ++cow;
      }
    }

    if (g3 == rand_letters[2])
      ++bull;
    else {
      for (int i = 0; i < rand_letters.size(); ++i) {
        if (g3 == rand_letters[i])
          ++cow;
      }
    }

    if (g4 == rand_letters[3])
      ++bull;
    else {
      for (int i = 0; i < rand_letters.size(); ++i) {
        if (g4 == rand_letters[i])
          ++cow;
      }
    }

    std::cout << "You entered " << bull << " bulls and " << cow << " cows\n";
    if (bull < 4) {
      bull = 0;
      cow = 0;
    }
  }
}

void run() {
  integers();
  guess();
}

int main() {
  // for(int i : integers())
  // std::cout << i << " " << "\n";
  try {
    run();
    return 0;
  } catch (const std::runtime_error &e) {
    std::cerr << e.what();
  }
}
