#include <iostream>

int main() {
  for (int n; std::cin >> n;) {
    int x = n;
    int f = x - 1;
    for (int i = f; x > i; --f) {
      f = x * f;
    }
    std::cout << f << "\n";
  }
}
