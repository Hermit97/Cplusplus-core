/*Improve print_until_s() from §8.5.2. Test it. What makes a good set of
test cases? Give reasons. Then, write a print_until_ss() that prints until it
sees a second occurrence of its quit argument.*/

#include <iostream>
#include <vector>
using namespace std;

void print_until_s(vector<string> v) {
  for (string s : v) {
    cout << s << '\n';
  }
}

bool checkForDuplicates(vector<string> v) {
  for (int i = 0; i < v.size(); ++i) {
    for (int j = i + 1; j < v.size(); ++j) {
      if (v[i] == v[j])
        return true;
    }
  }
  return false;
}

void print_until_ss(vector<string> v) {
  for (string s : v) {
    cout << s << '\n';
    if (checkForDuplicates(v) == true) {
      cout << "Printing ended...\n";
      return;
    }
  }
}

void getVector(vector<string> v) {
  string s;
  string quit = "q";
  cout << "Input...\n";
  while (true) {
    cin >> s;
    v.push_back(s);
    // check for duplicates
    if (checkForDuplicates(v) == true) {
      std::cout << "Duplicate found exiting\n";
      v.pop_back();

      break;
    }
  }
  print_until_s(v);

  cout << "Print again\n";
  print_until_ss(v);
}

void getNewVector(vector<string> v) {
  string s;
  string quit = "q";
  cout << "New vector\n";

  while (true) {
    cin >> s;
    v.push_back(s);
    if (s == "q")
      break;
  }

  cout << "New vector displayed\n";
  for (string s : v) {
    cout << s << '\n';
  }

  cout << "New vector displayed till \n";
  //print_until_ss(v);

  for (int x = 0; x < v.size(); ++x) {
    cout << v[x] << "\n";
    for (int i = 0; i < v.size(); ++i) {
      for (int j = j + 1; j < v.size(); ++j) {
        if (v[i] == v[j]) {
          cout << "Duplicate found\n";
          return;
        }
      }
    }
  }
}

int main() {
  vector<string> v;
  vector<string> x;
  getVector(v);
  getNewVector(x);
}
