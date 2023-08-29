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
  std::string max;
  return max;
}

std::string find_mode(std::vector<std::string> &seq) {
  std::string mode;
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

  bubble_sort(seq);
  for(std::string x : seq)
      std::cout << x << "\n";

  std::string min = seq[0];
  std::cout << "min: " << min << "\n";
  //std::cout << "The min string is " << find_min(seq) << "\n";
}
