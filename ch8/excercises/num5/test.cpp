#include <iostream>
#include <vector>

void swap(int x, int y) {
  int temp = x;
  x = y;
  y = temp;
}
int main() {
  std::vector<int> v1 = {1, 2, 3};
  for (int i = 0; i < v1.size(); ++i) {
    std::cout << v1[i] << "\n";
  }

  std::cout << "This is the old vector bubble sorted\n";
  std::cout << "New vector\n";
  for (int i = 0; i < v1.size(); ++i) {
    for (int j = 0; j < v1.size() - 1; ++j) {
	if (v1[j] < v1[j+1]){
	  int temp = v1[j];
	  v1[j] = v1[j+1];
	  v1[j+1] = temp;
      
	}	  //swap(v1[j], v1[j+1]);
    }
  }
  
  for (int i = 0; i < v1.size(); ++i) {
    std::cout << v1[i] << "\n";
  }
}
