#include <cmath>
#include <iostream>
#include <vector>

/*Quadratic equations are of the form
a ⋅ x^2 + b ⋅ x + c = 0
To solve these, one uses the quadratic formula:
*/

int main() {
      std::vector<int> nums;
      int howMany;
      int vectorSize;

      std::cout << "How many numbers\n";
      std::cin >> howMany;

      for(int num; std::cin >> num;)
          nums.push_back(num);

      vectorSize = nums.size();
      if(vectorSize > howMany)
          std::cout << "Vector size is bigger than n\n:";
}
