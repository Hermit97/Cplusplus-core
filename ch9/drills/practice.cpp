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
      num1 = nums[j];
      num2 = nums[j + 1];
      if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
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
    //printAfterSort();
    std::vector<int> n = {4, 3, 1, 2};
    int temp;
    for(int i = 0; i < n.size(); ++i){
        for(int j = 0; j < n.size() - 1; ++j){
            int num1 = n[j];
            int num2 = n[j + 1];
            if(n[j] > n[j + 1]){
                temp = n[j];
                n[j] = n[j + 1];
                n[j + 1] = temp;
            }

        }
    }

  for (int i = 0; i < n.size(); ++i) {
    std::cout << n[i] << "\n";
  }
}
