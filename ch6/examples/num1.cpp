#include <iostream>

void error(std::string e) { std::cout << e << "\n"; }

int main() {
  std::cout << "Please enter expression end with x\n";
  int lval;
  int rval;

  std::cin >> lval;
  if (!std::cin)
    error("no first operand");

  for (char op; std::cin >> op;) {
    if (op != 'x')
      std::cin >> rval;

    if (!std::cin)
      error("no second operand");

    switch (op) {
    case '+':
      lval += rval;
      break;
    case '-':
      lval -= rval;
      break;
    case '*':
      lval *= rval;
      break;
    default:
      std::cout << "Result: " << lval << '\n';
    }
  }

  error("Bad expression");
}
