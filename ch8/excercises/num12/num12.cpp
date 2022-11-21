/*Improve print_until_s() from §8.5.2. Test it. What makes a good set of
test cases? Give reasons. Then, write a print_until_ss() that prints until it
sees a second occurrence of its quit argument.*/

#include <exception>
#include <iostream>
#include <vector>

using namespace std;

void print_until_s(vector<string> &v, string &quit) {
  for (string s : v) {
    if (s == quit)
      return;
    cout << s << '\n';
  }
}

void print_until_ss(vector<string> &v, string &quit) {
  int count = 0;
  for (int i = 0; i < v.size(); ++i) {
    cout << v[i] << "\n";
    if (v[i] == quit) {
      ++count;
    }
    if (count > 1) {
      cout << "Duplicate of quit found ending\n";
      return;
    }
  }
}

int main() {
  try {
    vector<string> v;
    string s;
    string quit;

    cout << "Pick a letter you wanna check duplicates for\n";
    cin >> quit;

    cout << "Enter stuff\n";
    while (true) {
      cin >> s;
      if (s == "q")
        break;
      v.push_back(s);
    }

    cout << "You entered: \n";
    for (string s : v)
      cout << s << "\n";

    cout << "Results\n";
    print_until_s(v, quit);

    cout << "Other results\n";
    print_until_ss(v, quit);

  } catch (exception &e) {
    cerr << "Exception: " << e.what() << "\n";
    return 1;
  } catch (...) {
    cerr << "Unkown exceptions\n";
    return 2;
  }
}
