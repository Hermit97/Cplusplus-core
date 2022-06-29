#include <iostream>
#include <vector>

void error(std::string er) { std::cout << er << "\n"; }

class String_stream{
    public:
        std::string get();
        void putback(std::string);

    private:
        bool full {false};
        std::string buffer = {'0'};
};

void String_stream::putback(std::string s){
    if(full){
        buffer = s;
        full = true;
    }
}

std::string String_stream::get(){
    if(full){
        full = false;
        return buffer;
    }

    std::string s;
    std::cin >> s;

    return s;
}

String_stream stream;

bool noun();
bool conjunctoin();
bool verb();
bool sentence();

bool noun(){
    std::vector<std::string> nouns = {"birds", "fish", "C++"};
    std::string s = stream.get();
    bool found = false;

    for(std::string x : nouns){
        if(x == s){
            found = true;
        }else{
            error("Noun expected here");
            found = false;
            stream.putback(s);
        }
    }

    return found;
}

bool conjunction(){
    std::vector<std::string> conj = {"and", "or", "but"};

}
