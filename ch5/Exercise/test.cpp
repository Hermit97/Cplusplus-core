#include <iostream>

void error(std::string errorMessage){
  std::cout << errorMessage;
}

int main(){
    try{
        std::cout << "Enter a int\n";
        int n;
        std::cin >> n;
        if(n < 20)
            throw n;
        std::cout << n << "\n";

    }catch(int n){
        error("Range error\n");
    }
}
