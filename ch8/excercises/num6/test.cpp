/*Write versions of the functions from exercise 5, but with a vector<string> .*/

#include <iostream>
#include <vector>

std::vector<std::string> originalString;

void getOriginal() {
  std::string x;
  bool isTrue = true;
  while (true) {
    std::cin >> x;
    if (x == "q")
      break;
    originalString.push_back(x);
  }

  // print the vector
  for (int i = 0; i < originalString.size(); ++i) {
    std::cout << originalString[i] << "\n";
  }
}

// function to reverse its elements using bubble sort
void bubbleSort() {
  std::vector<std::string> v1;
  for (int i = 0; i < originalString.size(); ++i) {
      for(int j = 0; j < originalString.size(); ++j){
	  if(i < j){
	      std::string temp = originalString[i];
	      originalString[i] = originalString[j];
	      originalString[j] = temp;
	  }
      }
  }
  std::cout << "New vector\n";
  // print the vector
  for (int i = 0; i < originalString.size(); ++i) {
    std::cout << originalString[i] << "\n";
  }
}

int main() {
  getOriginal();
  bubbleSort();
}
