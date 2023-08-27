#include <iostream>
#include <vector>

int find_mode(std::vector<int> mode) {
  int m;
  for (int i = 0; i < mode.size(); ++i) {
    for (int j = i; j < mode.size(); ++j)
      if (mode[i] == mode[j + 1]) {
        m = mode[i];
        break;
      }
  }
  return m;
}

int main() {
  std::vector<int> mode;

  int num;
  std::cout << "Enter a bunch of numbers\n";

  while (std::cin >> num)
    mode.push_back(num);

  std::cout << find_mode(mode) << "\n";
}
