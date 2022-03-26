#include <iostream>
#include <cmath>

using namespace std;

int main() {
  int max = 100;
  cout << "Think about a number between 1 and "<< max << endl;

  int left = 1;
  int right = max;
  while (left != right) {
    int m = ceil((left + right) / 2.0);
    char reply;
    cout << "Is the number < " << m << "?" << endl;
    cin >> reply;
    if (reply == 'y')
      right = m-1;
    else
      left = m;
  }
  cout << "the number was: " << left << endl;
  return 0;
}
