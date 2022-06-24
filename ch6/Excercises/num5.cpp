#include <iostream>
#include <utility>
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

void string_stream::putBack(std::string s){
    if(full) error("putback() into a full buffer");
    buffer = s;
    full = true;
}

std::string string_stream::get(){
    if(full){
        full = false;
        return buffer;
    }
    std::string s;
    std::cin >> s;
}

string_stream stream;

bool noun();
bool conjunction();
bool verb();
bool sentence();

bool noun(){
    std::vector<std::string> noun = {"birds", "fish", "C++"};
    bool found = false;

    std::string n = stream.string_stream::get();
    for(std::string x : noun){
        if(x == n)
            found = true;
    }
}
