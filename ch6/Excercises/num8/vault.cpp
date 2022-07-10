#include <iostream>
#include <stdexcept>
#include "permutation.h"
#include "combinations.h"
#include "vault.h"

permutation num;
combinations num2;

const std::string INVALID_INPUT = "Entered a non integer value";
void runningProgram::run(){
   int number;
   std::cout << "Enter 1 for the permutatoin formula or enter 2 for the combinations formula\n";
   std::cin >> number;
   if(!std::cin)
      throw std::runtime_error(INVALID_INPUT);

   if(number == 1)
      std::cout << num.answer();
   else if(number == 2)
      std::cout << num2.answer();
   else
      throw std::runtime_error(INVALID_INPUT);
}
