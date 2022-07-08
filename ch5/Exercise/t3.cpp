#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> parse;
    string in;

    cin >> in;
    for(char d : in){
        if(parse.size() != 0 || d != '0')
            parse.push_back(d - '0');
    }

    if(parse.size() == 0)
        parse.push_back(0);

    for(int i = 0; i < parse.size(); ++i){
        std::cout << parse[i] << "\n";
    }
}
