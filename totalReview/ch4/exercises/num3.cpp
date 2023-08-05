/*Write a program to play a numbers guessing game. The user thinks of a
number between 1 and 100 and your program asks questions to figure
out what the number is (e.g., “Is the number you are thinking of less than
50?”). Your program should be able to identify the number after asking
no more than seven questions. Hint: Use the < and <= operators and the
if-else construct.*/

#include <iostream>

int main() {
  int upper_bound = 100;
  int lower_bound = 1;
  int questions = 7;
  int guess;
  char response;

  for (int attempt = 1; attempt <= questions; ++attempt) {
    guess = (upper_bound + lower_bound) / 2; // gets 50 (mid value)

    std::cout << " Is your number greater than " << guess << "\n";
    std::cin >> response;

    if (response == 'Y' || response == 'y')
      lower_bound = guess + 1;
    else if (response == 'N' || response == 'n')
      upper_bound = guess;

    if (lower_bound > upper_bound) {
      std::cout << "Error try again\n";
      break;
    }

    if (upper_bound == lower_bound) {
      std::cout << "I guessed " << lower_bound << " correct it took " << attempt
                << " to get right "
                << "\n";
      break;
    }
  }
}
