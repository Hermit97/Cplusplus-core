#include <algorithm>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <limits>
#include <string>
#include <system_error>
#include <vector>

int main(){
  /*Write a program that finds the min, max, and mode of a sequence of
    strings*/

  std::string w;

  std::vector<std::string> words;
  std::vector<std::string> modes;

  //Enter a series of words into a vector
  for(std::string word; std::cin >> word;){
    if(word == "|"){
      break;
    }
    words.push_back(word);
  }

  std::cout << "Unsorted list\n";
  for(int i = 0; i < words.size(); i++){
    std::cout << words[i] << "\n";
  }

  //Sort the vector of strings
  for(int i = 0; i < words.size(); i++){
    for(int j = i; j < words.size(); j++){
      if(words[i] > words[j]){
	std::string temp = words[i];
	words[i] = words[j];
	words[j] = temp;
      }
    }
  }

  //Print the sorted vector
  std::cout << "\nsorted list\n";
  for(int i = 0; i < words.size(); i++){
    std::cout << words[i] << "\n";
  }

  //Min
  std::string min = words[0];

  //Max
  std::string max = words[0];
  for(int i = 0; i < words.size(); i++){
    if(max < words[i])
      max = words[i];
  }

  //Print both max and min
  std::cout << "The min is " << min <<"\n The max is " << max << "\n";

  //Find the mode
  std::string mode;
  for(int i = 0; i < words.size(); i++){
    if(words[i] == words[i + 1]){
	mode = words[i];
	modes.push_back(mode); 
    }
  } 

  
  std::cout << "The mode is ";
  std::string whiteSpace = " ";
  for(int i = 0; i < modes.size(); i++){
    std::cout << whiteSpace << modes[i];
    whiteSpace = ",";
  }

  std::cout << "\n";
}

