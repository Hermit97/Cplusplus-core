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

    // num10
    std::string x = "fool";
    if (x == "fool")
      std::cout << "num10 Success!\n";

    // num11
    std::string o = "ape";
    if (o != "fool")
      std::cout << " num11 Success!\n ";

    // num12
    std::string q = "ape";
    if (s != "fool")
      std::cout << "num 12 Success!\n ";

    // num13
    std::vector<char> n(5);
    for (int i = 0; i <= n.size(); ++i)
      std::cout << "num13 Success!\n";

    // num14
    std::vector<char> z(5);
    for (int i = 0; i <= z.size(); ++i)
      std::cout << "num14 Success!\n";

    // num15
    std::string g = "Success!\n";
    for (int i = 0; i < g.size(); ++i)
      std::cout << g[i];

    //num16
    if (true)
      std::cout << "num16 Success!\n ";
    else
      std::cout << " Fail!\n " ;

    //num17
    int l = 2000;
    int sev = l;
    if (sev == 2000)
      std::cout << "num17 Success!\n";

    //num18
    std::string sa = "num18 Success!\n";
    for(int i=0; i < sa.size(); ++i)
      std::cout << sa[i];

    //num19
    std::vector<int> vv(5);
    for (int i=0; i<=v.size(); ++i)
      std::cout << "Success!\n" ;

    //num20
    int i = 0;
    int j = 9;
    while (i<=10)
      ++i;
    if(j < i)
      std::cout << "Num 20 Success!\n";

    //num21
    int xx = 2;
    double dd = 18 / (xx + 2) + 0.5;
    double cc = 2 * xx + 0.5;

    std::cout << "dd is " << dd << "\n";
    std::cout << "cc is " << cc << "\n";

    if (dd == cc)
      std::cout << " Success!\n " ;

    //num22
    std::string ss = "num22 Success!\n";
    for (int i = 0; i <= ss.size(); ++i)
      std::cout << ss[i];

    //num23
    int iii=0;
    int jj = 0;

    while(iii < 10)
      ++iii;
    if (jj < iii)
      std::cout << "num23 Success!\n " ;

    //num24
    int who = 4;
    double d = 48 / (who + 2) + 0.5;
    double ew = 2 * who + 0.5;
    std::cout << "who is " << d << "\n";
    std::cout << "ew is " << ew << "\n";
    if (d == ew)
      std::cout << "num24 Success!\n " ;

    //num25
    std::string word;
    std::string re = "Success!";
    std::cin >> word;

    if (word == re) {
      std::cout << "num25 Success!\n " ;

    }


    return 0;
  } catch (std::exception &e) {
    std::cerr << "error: " << e.what() << '\n';
    return 1;
  } catch (...) {
    std::cerr << "Oops: unknown exception!\n";
    return 2;
  }
}
