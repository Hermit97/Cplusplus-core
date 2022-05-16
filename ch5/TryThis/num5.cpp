#include <iostream>
#include <exception>

int main() {
  try {
    //<< your code here >> keep_window_open();
    std::cout << "Success!" << "\n";
    return 0;
  } catch (std::exception &e) {
   std::cerr << "error: " << e.what() << '\n';
    return 1;
  } catch (...) {
    std::cerr << "Oops: unknown exception!\n";
    return 2;
  }
}
