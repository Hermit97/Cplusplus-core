#include <iostream>
#include "error.h"
#include <cmath>

//positive
q_pos(double b, double a, double c){
  //put in a error check for b2 - 4ac if its less than zero make sure it fails
  double formula = -b + (sqrt((b*b) - 4 * (a * c)));

  double result = formula / (2 * a);
}


int main(){

}
