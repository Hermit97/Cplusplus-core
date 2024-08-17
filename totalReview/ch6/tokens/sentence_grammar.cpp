#include "error.h"
#include <iostream>
#include <vector>

class grammar {
private:
  std::vector<std::string> nouns = {"birds", "fish", "C++"};
  std::vector<std::string> verbs = {"rules", "fly", "swim"};
  std::vector<std::string> conjunctions = {"and", "or", "but"};

public:
  // constructor

  bool get() {
    std::string words;
    std::string noun;
    std::string verb;
    std::string conjunction;
    bool complete = true;
    bool accepted = true;

    while (words != ".") {

		//noun
      std::cin >> noun;
      for (std::string x : nouns) {
        if (noun == x) {
          accepted = true;
          break;
        } else {
          accepted = false;
        }
      }

	  if(accepted == false){
		   std::cout << "Not a valid noun\n";
          exit(0);
		  
	  }

      // second verb
      std::cin >> verb;
      for (std::string x : verbs) {
        if (verb == x) {
          accepted = true;
          break;
        } else {
          accepted = false;
        }
      }
	  if(accepted == false){
		   std::cout << "Not a valid verb\n";
          exit(0);
		  
	  }

      std::cin >> conjunction;
      // conjunction
      for (std::string x : conjunctions) {
        if (conjunction == ".") {
          return accepted;
          break;
        } else if (conjunction == x) {
          accepted = true;
          break;
        } else {
			accepted = false;
        }
      }
	  if(accepted == false){
		   std::cout << "Not a valid verb\n";
          exit(0);
		  
	  }

      // next sentence
      std::cin >> noun;
      // noun
      for (std::string x : nouns) {
        if (noun == x) {
          accepted = true;
          break;
        } else {
          accepted = false;
        }
      }

	  if(accepted == false){
		   std::cout << "Not a valid verb\n";
          exit(0);
		  
	  }
      std::cin >> verb;
      // verb
      for (std::string x : verbs) {
        if (verb == x) {
          accepted = true;
          // std::cout << verb << " good\n";
          break;
        } else {
          accepted = false;
        }
      }

	  if(accepted == false){
		   std::cout << "Not a valid verb\n";
          exit(0);
		  
	  }
      std::cin >> conjunction;
      // conjunction
      for (std::string x : conjunctions) {
        if (conjunction == ".") {
          return accepted;
          break;
        } else {
			accepted = false;
        }
      }
	  if(accepted == false){
		   std::cout << "Not a valid conjunction\n";
          exit(0);
		  
	  }
    }

    return accepted;
  }
};

int main() {
  try {
    grammar words;

    if (words.get() == true) {
      std::cout << "OK\n";
    } else
      std::cout << "Not a valid sentence\n";
  } catch (std::exception &e) {
    std::cerr << e.what() << std::endl;
    return 1;
  }
}
