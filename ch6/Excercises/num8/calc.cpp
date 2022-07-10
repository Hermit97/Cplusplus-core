#include <iostream>
#include "vault.h"
#include "permutation.h"

int main(){
    try{
        //runningProgram num;
        permutation qw;

        int a = qw.permutation::answer();
        std::cout << a << "\n";
    }catch(std::exception& e){
        std::cerr << "ERROR " << e.what() << "\n";
    }
}
