#include <iostream>
#include <vector>

void error(std::string er) { std::cout << er << "\n"; }

class String_stream {
public:
  std::string get();
  void putback(std::string);

private:
  bool full{false};
  std::string buffer = {'0'};
};

void String_stream::putback(std::string s) {
  if (full) {
    buffer = s;
    full = true;
  }
}

std::string String_stream::get() {
  if (full) {
    full = false;
    return buffer;
  }
  std::string s;
  std::cin >> s;
  return s;
}

String_stream stream;

bool noun();
bool conjunctoin();
bool verb();
bool sentence();

bool noun() {
  std::vector<std::string> nouns = {"birds", "fish", "C++"};
  std::string s = stream.get();
  bool found = false;

  for (std::string x : nouns) {
    if (x == s) {
      found = true;
    } else {
      error("Noun expected here");
      found = false;
      stream.putback(s);
    }
  }
  return found;
}

bool conjunction() {
  std::vector<std::string> conj = {"and", "or", "but"};
  std::string s = stream.get();
  bool found = false;

  for (std::string x : conj) {
    if (x == s) {
      found = true;
    } else {
      found = false;
      error("Conj expected here");
      stream.putback(s);
    }
  }
  return found;
}

bool verb() {
  std::vector<std::string> verbs = {"rule", "fly", "swim"};
  std::string s = stream.get();
  bool found = false;

  for (std::string x : verbs) {
    if (x == s)
      found = true;
    else {
      found = false;
      error("Verb expected here");
      stream.putback(s);
    }
  }
  return found;
}

bool sentence() {
  if (noun() && verb()) {
    if (conjunction())
      return sentence();
    else
      return true;
  } else {
    stream.get();
    return false;
  }
}

int main() {
  std::cout << "Enter a sentence\n";
  bool is_sentence = false;
  bool end = false;
  while (!end) {
    std::string s = stream.get();
    if (s == ".") {
      if (is_sentence)
        std::cout << "ok\n";
      else
        std::cout << "Not okay\n";
    } else if (s == "q") {
      end = true;
    } else
      stream.putback(s);

    is_sentence = sentence();
  }
}
