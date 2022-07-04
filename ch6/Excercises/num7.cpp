/*Write a program that reads digits and composes them into integers. For
example, 123 is read as the characters 1, 2, and 3. The program should
output 123 is 1 hundred and 2 tens and 3 ones . The number should be
output as an int value. Handle numbers with one, two, three, or four
digits. Hint: To get the integer value 5 from the character '5' subtract '0' ,
that is, '5' – '0'==5 .*/

#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> parse;
    vector<string> num_words = {"Thousands", "Hundreds", "Tens", "Ones"};
    string in;

    cin >> in;
    for(char d : in){
        if(parse.size() != 0 || d != '0')
            parse.push_back(d - '0');
    }

    if(parse.size() > 4){
        cout << "Input is to big to handle exiting program\n";
        exit(0);
    }

    if(parse.size() == 0)
        parse.push_back(0);

    for(int i = 0; i < parse.size(); ++i){
        std::cout << parse[i] << "\n";
    }

    cout << "\n\n";

    if(parse.size() == 1)
        cout << parse[0] << " " << num_words[3] << "\n";
    else if(parse.size() == 2)
        cout << parse[0] << " " << num_words[2] << " " << parse[1] << " " << num_words[3] << "\n";
    else if(parse.size() == 3)
        cout << parse[0] << " " << num_words[1] << " " << parse[1] << " " << num_words[2] << " " << parse[2] << " " << num_words[3] << "\n";
    else if(parse.size() == 4)
        cout << parse[0] << " " << num_words[0] << " " << parse[1] << " " << num_words[1] << " " << parse[2] << " " << num_words[2] << " " << parse[3] << " " << num_words[3] << "\n";
}
