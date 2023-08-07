#include <iostream>

int main(){
    int low = 1;
    int high = 100;
    int questions = 7;
    int guess;
    char user;

    std::cout << "I am going to guess the number between 1 and 100\n";
    for(int i = 0; i < questions; ++i){
        guess = (high + low) / 2;

        std::cout << "If the number greater than " << guess <<  " then enter y otherwise enter n" << "\n";
        std::cin >> user;

        if(user == 'Y' || user == 'y'){
            low = guess + 1;
        }
        else if(user == 'N' || user == 'n'){
            high = guess;
        }



        if(high == low){
          std::cout << "Ive found the correct number, it is " << high << " it took " << i << " attemnpts\n";
          break;
        }

        if(low > high){
            std::cout << "ERRRROR!\n";
        }


    }
}
