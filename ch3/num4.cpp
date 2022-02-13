#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

int main(){
    std::string w1, w2, w3;
    std::string big, mid, small;

    std::cout << "Enter three words\n";
    std::cin >> w1 >> w2 >> w3;


    if(w1 >= w2 && w1 >= w3){
        big = w1;

        if(w2 <= w1 && w2 >= w3){
            mid = w2;
            small = w3;
        }else{
            mid = w3;
            small = w2;
        }
    }else if(w2 >= w1 && w2 >= w3){
        big = w2;
        if(w1 <= w2 && w1 >= w3){
            mid = w1;
            small = w3;
        }else{
            mid = w3;
            small = w1;
        }
    }else if(w3 >= w1 && w3 >= w2){
        big = w3;
        if(w2 <= w3 && w2 >= w1){
            mid = w2;
            small = w1;
        }else{
            mid = w1;
            small = w2;
        }
    }



    /*
    if(w1 > w2 && w1 > w3){
        big = w1;

        if(w2 < w1 && w2 > w3){
            mid = w2;
            small = w3;
        }else{
            mid = w3;
            small = w2;
        }
    }else if(w2 > w1 && w2 > w3){
        big = w2;
        if(w1 < w2 && w1 > w3){
            mid = w1;
            small = w3;
        }else{
            mid = w3;
            small = w1;
        }
    }else if(w3 > w1 && w3 > w2){
        big = w3;
        if(w2 < w3 && w2 > w1){
            mid = w2;
            small = w1;
        }else{
            mid = w1;
            small = w2;
        }
    }
    */

    std::cout << "Solutions\n " << small << "\n" << mid << "\n" << big << "\n";
}
