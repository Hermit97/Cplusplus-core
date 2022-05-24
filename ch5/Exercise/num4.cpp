#include <iostream>
// Add to the program so that it can also convert from Kelvin to Celsius.

double ctok(double c) {
  double k = c + 273.15;
  if (c < k) {
    throw c;
  }
  return k;
}

double ktoc(double k) {
  double c = k - 273.15;
  double minK= -541.3;
  if (k < minK) {
    throw k;
  }
  return c;
}

void error(std::string errorMessage) { std::cout << errorMessage; }

// converts Celsius to KelvinCHAPTER 5 • ERRORS
int main() {
  int num;
  std::cout << "Enter 1 for c to k or 2 for k to c\n";
  std::cin >> num;

  //c to k
  if(num == 1){
    try {
        double c;
        double minCelsius = -273.15;
        std::cin >> c;

        double k = ctok(c);
        std::cout << k << "\n";
    } catch (double c) {
        error("Range error\n");
    }
    //k to c
  }else if(num == 2){
    try {
        double c;
        double minK= -541.3;
        std::cin >> c;

        double a = ktoc(c);
        std::cout << a << "\n";
    } catch (double c) {
        error("Range error\n");
    }
  }else
    std::cout << "Wrong input...exiting program\n";
}
