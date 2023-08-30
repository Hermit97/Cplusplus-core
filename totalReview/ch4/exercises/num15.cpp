/*Write a program that finds the min, max, and mode of a sequence of
strings.*/

#include <iostream>
#include <vector>

void bubble_sort(std::vector<std::string> &seq) {
  for (int i = 0; i < seq.size() - 1; ++i) {
    for (int j = 0; j < seq.size() - 1; ++j) {
      if (seq[j] > seq[j + 1]) {
        std::string temp = seq[j];
        seq[j] = seq[j + 1];
        seq[j + 1] = temp;
      }
    }
  }
}

std::string find_min(std::vector<std::string> &seq) {
  bubble_sort(seq);
  std::string min = seq[0];
  return min;
}

std::string find_max(std::vector<std::string> &seq) {
  int end = seq.size() - 1;
  std::string max = seq[end];
  return max;
}

std::string find_mode(std::vector<std::string> &seq) {
  std::string mode;
  for(int i = 0; i < seq.size() - 1; ++i){
    for(int j = i; j < seq.size() - 1; ++j){
      if(seq[i] == seq[j + 1])
        mode = seq[i];
    }
  }
  return mode;
}

int main() {
  std::vector<std::string> seq;
  std::string words;

  while (std::cin >> words) {
    if (words == "q")
      break;
    seq.push_back(words);
  }

  std::cout << "Before sort\n";
  for(std::string x : seq)
      std::cout << x << "\n";

  bubble_sort(seq);

  std::cout << "After sort\n";
  for(std::string x : seq)
      std::cout << x << "\n";

  std::cout << "The min string is " << find_min(seq) << "\n";
  std::cout << "The max string is " << find_max(seq) << "\n";
  std::cout << "The mode string is " << find_mode(seq) << "\n";
}
