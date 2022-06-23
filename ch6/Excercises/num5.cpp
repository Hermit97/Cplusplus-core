#include <iostream>
#include <vector>

class string_stream {
public:
  std::string get();
  void putBack(std::string);

public:
  bool full{false};
  std::string buffer = {'0'};
};

void error(std::string er) { std::cout << er << "\n"; }

void string_stream::putBack(std::string s) {
  if (full)
    error("putback() into a full buffer");
  buffer = s;
}

std::string string_stream::get() {
  if (full) {
    full = false;
    return buffer;
  }

  std::string s;
  std::cin >> s;

  return s;
}

string_stream stream;

std::string noun(){
    std::vector<std::string> noun;
}
