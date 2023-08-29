/*Write a program that finds the min, max, and mode of a sequence of
strings.*/

#include <iostream>
#include <vector>

void bubble_sort(std::vector<int>& num) {
  for (int i = 0; i < num.size() - 1; ++i) {
    for (int j = 0; j < num.size() - 1; ++j) {
      if (num[j] > num[j + 1]) {
        int temp = num[j];
        num[j] = num[j + 1];
        num[j + 1] = temp;
      }
    }
  }
}

int find_min(std::vector<int>& num) {
   bubble_sort(num);
   int min = num[0];
   return min;
}

int find_max(std::vector<int>& num) {
  int end = num.size()- 1;
  int max = num[end];
  return max;
}

int find_mode(std::vector<int>& num) {
  int mode;
  for(int i = 0; i < num.size() - 1; ++i){
    for(int j = i; j < num.size() - 1; ++j){
      if(num[i] == num[j+1])
        mode = num[i];
    }
  }
  return mode;
}

int main() {
  std::vector<int> numbers;
  int n;
  while (std::cin >> n)
    numbers.push_back(n);

  std::cout << "Min is " << find_min(numbers) << "\n";
  std::cout << "Max is " << find_max(numbers) << "\n";
  std::cout << "Mode is " << find_mode(numbers) << "\n";
}
