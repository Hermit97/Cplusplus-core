#include <exception>
#include <iostream>
#include <vector>

int main() {
  try {
    //<< your code here >> keep_window_open();
    // num1
    std::cout << "Success!\n";
    // num2
    std::cout << "Success!"
              << "\n";
    // num3
    std::cout << "Success!"
              << "\n";
    // num4
    std::cout << "Success!" << '\n';
    // num5
    int res = 7;
    std::vector<int> v(10);
    v[5] = res;
    std::cout << "Success!\n ";
    // num6
    std::vector<int> f(10);
    f[5] = 7;
    if (f[5] == 7)
      std::cout << "Num 6 Success!\n";

    // num7
    if (true)
      std::cout << " num7 Success!\n ";
    else
      std::cout << " Fail!\n ";
    // num8
    bool c = true;
    if (c)
      std::cout << " num8 Success!\n ";
    else
      std::cout << " Fail! "
                << "\n";

    // num9
    std::string s = "ape";
    std::string a = "fool";
    if (a > s)
      std::cout << "num9 Success!\n ";

    //num10
    std::string x = "fool";
    if (x == "fool")
	std::cout << "num10 Success!\n";

    //num11
    std::string o = "ape";
    if (o != "fool" )
	std::cout << " num11 Success!\n " ;

    //num12
    std::string q = "ape";
    if (s != "fool")
	std::cout << "num 12 Success!\n " ;

    //num13
    std::vector<char> n(5);
    for (int i=0; i <= n.size(); ++i)
	std::cout << "num13 Success!\n";

    //num14
    std::vector<char> z(5);
    for (int i = 0; i <= z.size(); ++i)
	std::cout << "num14 Success!\n";

    //num15
    std::string g = "Success!\n";
    for (int i=0; i<6; ++i)
	std::cout << g[i - 5];

    return 0;
  } catch (std::exception &e) {
    std::cerr << "error: " << e.what() << '\n';
    return 1;
  } catch (...) {
    std::cerr << "Oops: unknown exception!\n";
    return 2;
  }
}
