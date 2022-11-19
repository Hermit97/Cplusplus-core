#include <iostream>
#include <vector>
using namespace std;

void print(vector<string> v){
    std::cout << v.size() << "\n";
    for(string s : v)
        cout << s << "\n";
}

void getVector(vector<string> v){
    string x;
    cout << "Enter letters\n";
    while(true){
        cin >> x;

        if(x == "q")
            break;
        v.push_back(x);
    }
    std::cout << v.size() << "\n";
    print(v);
}

int main(){
    vector<string> v;
    print(v);
}
