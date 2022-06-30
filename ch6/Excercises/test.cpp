#include <iostream>
#include <system_error>
#include <vector>

class String_stream{
    public :
        std::string get();
        void putback(std::string s);
    private:
        bool full {false};
        std::string buffer = "";
};

void error(std::string er){
  std::cout << er << "\n";
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

void String_stream::putback(std::string s){
    if(full) error("putback() into a full buffer");
    buffer = s;
    full = true;
}

String_stream stream;
bool noun();
bool conjuntion();
bool sentence();

bool noun(){
    std::vector<std::string> nouns = {"birds", "fish", "C++"};
    std::string s = stream.get();
    bool found = false;

    for(std::string x : nouns)
        if(x == s)
            found = true;
    if(!found)
        stream.putback(s);
    return found;
}

bool conjunction(){
    std::vector<std::string> conjs = {"and", "or", "but"};
    std::string s = stream.get();
    bool found = false;

    for(std::string x : conjs)
        if(x == s)
            found = true;
    if(!found)
        stream.putback(s);
    return found;
}

bool verb(){
    std::vector<std::string> verbs = {"rules", "fly", "swim"};
    std::string s = stream.get();
    bool found = false;

    for(std::string x : verbs)
        if(x == s)
            found = true;
    if(!found)
        stream.putback(s);
    return found;
}

bool sentence(){
    if(noun() && verb()){
        if(conjunction())
            return sentence();
        else
            return true;
    }else{
        stream.get();
        return false;
    }
}

int main(){
    bool is_sentence= sentence();
    std::string s = stream.get();
    if(is_sentence && s == ".")
        std::cout << "Okay\n";
    else
        std::cout << "Not okay\n";
    if(s == "q")
        exit(0);
}
