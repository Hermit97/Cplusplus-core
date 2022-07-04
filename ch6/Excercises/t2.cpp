#include <cstdio>
#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

vector<string> num_words;
void error(std::string er) { std::cout << er << "\n"; }

void init(){
    num_words.push_back("thousand");
    num_words.push_back("hundred");
    num_words.push_back("ten");
    num_words.push_back("one");
}

int char_to_int(vector<int>v){
    int num = 0;
    for(int i = 0; i < v.size(); ++i)
        num = 10*num + v[i];
    return num;
}

void plural_s(int n){
    if (n==0 || n>1)
        cout << 's';
    if (n == 1)
        return;
    if (n < 0)
        error("plural_s can handle only non-negative numbers");
}

void print_number(vector<int>v, int num){
    //print
    cout << num << " is \n";
    for(int i = 0; i < v.size(); ++i){
        cout << v[i] << ' ' << num << num_words[i+4-v.size()];
        plural_s(v[i]);
        if (i < v.size()-1)
            cout << " and ";
    }
    cout << "\n";
}

int main(){
    init();

    cout << "Enter number with up to four digits, followed by a ';' and a newline.\n";
    cout << "Enter 'q' to quit.\n";
    while (true) {
        // get input from cin, put into vector of characters
        vector<int> ch_vec;
        char ch;
        while (cin>>ch) {
            if (ch == 'q')
                return 0;
            if (ch<'0' || ch>'9') {
                cin.ignore(10000,'\n'); // we're not interested after a non-digit input
                break;
            }
            ch_vec.push_back(ch-'0');
        }

        // calculate integer from input
        int as_int = char_to_int(ch_vec);

        // produce output
        print_number(ch_vec,as_int);

        cout << "Try again:\n";
    }
    return 0;
}
