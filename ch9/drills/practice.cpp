#include <iostream>
#include <vector>

std::vector<int> nums;

void setVectorVals() {
  int num;
  std::cout << "Enter four integers:\n";
  for (int i = 0; i < 4; ++i) {
    std::cin >> num;
    nums.push_back(num);
  }
}
void printOrig() {
  setVectorVals();
  for (int i = 0; i < nums.size(); ++i) {
    std::cout << nums[i] << "\n";
  }
  std::cout << "-------------------------\n";
}

void bubbleSort() {
  printOrig();
  // Apply the bubble sort
  int num1, num2, temp;
  for (int i = 0; i < nums.size(); ++i) {
    for (int j = 0; j < nums.size() - 1; ++j) {
      if (nums[j] > nums[j + 1]) {
        temp = nums[j];
        nums[j] = nums[j + 1];
        nums[j + 1] = temp;
      }
    }
  }
}

void printAfterSort() {
  bubbleSort();
  for (int i = 0; i < nums.size(); ++i) {
    std::cout << nums[i] << "\n";
  }
}

int main() {
    printAfterSort();
}
