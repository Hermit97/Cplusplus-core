/*Redo the “Bulls and Cows” game from exercise 12 in Chapter 5 to use
four letters rather than four digits.
*/

#include <algorithm>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <vector>

int main() {
  try {
    std::vector<char> origLetter;
    std::vector<char> letters;

    char user;

    int bull, cow;

    origLetter.push_back('A');
    origLetter.push_back('B');
    origLetter.push_back('C');
    origLetter.push_back('D');

    std::srand(time(0));
    std::random_shuffle(origLetter.begin(), origLetter.end());

    for (int i = 0; i < origLetter.size(); i++)
      std::cout << origLetter[i] << "\n";

    // Game starts
    std::cout << "Welcome to Bulls and Cows!\n";
    std::cout << "Their are 4 numbers ranging from 1 - 9.\n";

    std::cout << "Enter 4 letters between A and D\n\n\n";

    for (int i = 0; i < 4; i++) {
      std::cin >> user;
      letters.push_back(user);
    }

    std::cout << "Finish input\n";

    bull = 0;
    cow = 0;
    for (int i = 0; i < origLetter.size(); i++) {
      for (int j = 0; j < letters.size(); j++)
        if (letters[j] == origLetter[i]) {
          if (j == i)
            ++bull;
          else
            ++cow;
        }
    }
    std::cout << "bulls: " << bull << "\n"
              << "cows:" << cow << "\n";

  } catch (std::exception &) {
  }
}
