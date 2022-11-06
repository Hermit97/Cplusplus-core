/*Write a function that given two vector<double> s price and weight com-
putes a value (an “index”) that is the sum of all price[i]*weight[i] . Make
sure to have weight.size()==price.size() .*/

#include <cstdlib>
#include <iostream>
#include <vector>

std::vector<double> price;
std::vector<double> weight;

bool getPrice(){
    std::string w;
    double yourWeight;
    bool isTrue = true;
    while(isTrue){
        std::cin >> yourWeight;
        if(w == "q")
            return isTrue = false;
        yourWeight= std::atoi(w.c_str());
        weight.push_back(yourWeight);
    }
}

int main(){
    getPrice();
    for(double d : weight){
        std::cout << d << "\n";
    }
}
