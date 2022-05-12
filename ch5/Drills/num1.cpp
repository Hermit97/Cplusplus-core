#include <iostream>
#include <exception>
#include <vector>

int main() {
  try {
    //<< your code here >> keep_window_open();
    //num1
		std::cout << "Success!\n";
    //num2
    std::cout << "Success!" << "\n";
    //num3
    std::cout << "Success!" << "\n";
    //num4
    std::cout << "Success!" << '\n';
    //num5
    int res = 7; 
    std::vector<int> v(10);
    v[5] = res; 
    std::cout << "Success!\n " ;
    //num6
    std::vector<int> f(10); 
    f[5] = 7; 
    if (f[5] == 7) 
      std::cout << "Num 6 Success!\n";

    //num7
    if (true) 
      std::cout << " Success!\n " ; 
    else 
      std::cout << " Fail!\n " ;
    return 0;
  } catch (std::exception &e) {
   std::cerr << "error: " << e.what() << '\n';

   //num8
   bool c = false; 
   if (c) 
    std:: cout << " Success!\n "; 
   else 
     std::cout << " Fail! " << "\n";
    return 1;
  } catch (...) {
    std::cerr << "Oops: unknown exception!\n";
    return 2;
  }
}
