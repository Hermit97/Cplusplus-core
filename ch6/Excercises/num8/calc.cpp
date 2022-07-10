#include <iostream>
#include "vault.h"
#include "permutation.h"

int main(){
    try{
        runningProgram num;
        num.run();
         

    }catch(std::exception& e){
        std::cerr << "ERROR " << e.what() << "\n";
    }
}
