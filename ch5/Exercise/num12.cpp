#include <algorithm>
#include <iostream>
#include <cstdlib>
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

int main() {
  std::vector<int> origNums;
  std::vector<int> nums;
  std::vector<int> playerGuess;
  int num1, num2, num3, num4;
  int n1, n2, n3, n4;

  //2 vectors one with 1 thorugh 9. Other vector pulls 4 random numbers from the first vector that dont repeat.
  for(int i = 1; i <= 9; i++){
    origNums.push_back(i);
  }

  //Makes the vectors order random.
  std::srand(time(0));
  std::random_shuffle(origNums.begin(), origNums.end());

  //print the random orig vector
  for(int i = 0; i < origNums.size(); i++){
    std::cout << origNums[i] << "\n";
  }

  //Push 4 elements from origNum and push them into nums vector
  //for(int i = 0; i < origNums.size(); ++i){
  for(int i = 0; i <= 3; ++i){
    nums.push_back(origNums[i]);
  }

  std::cout << "Nums vector:\n";
  for(int i = 0; i < nums.size(); i++){
    std::cout << nums[i] << "\n";
  }

  //Game starts
  std::cout << "Welcome to Bulls and Cows!\n";
  std::cout << "Their are 4 numbers ranging from 1 - 9.\n";
  std::cout << "Enter 4 integers that match these numbers.\n";

  std::cin >> n1 >> n2 >> n3 >> n4;
  playerGuess.push_back(n1);
  playerGuess.push_back(n2);
  playerGuess.push_back(n3);
  playerGuess.push_back(n4);

  std::cout << "You entered " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << "\n";

  //Check if user input equals the num vector in order
  bool notCorrect = true;
  bool match = true;
//  while(notCorrect == true){
    for(int i = 0; i < nums.size(); i++){
      //if(n1 == nums[i] && n2 != nums[i + 1] && n3 != nums[i + 2] && n4 != nums[i + 3])
      if(playerGuess[i] == nums[i]){
	  //std::cout << i << "bull\n";
	  match = true;
      }else if(playerGuess[i] != nums[i]){
	  //std::cout << "1 bull and 1 cow\n";
	  match = false;
	  break;
	  //return notCorrect = false;
      }
    }
    //}

  if(match == true)
      std::cout << "4 bulls\n";
  else if(match == false)
      std::cout << "1 Bull 1 Cow\n";
}
