/*Define a class Name_value that holds a string and a value. Rework exer-
cise 19 in Chapter 4 to use a vector<Name_value> instead of two vector s.*/
#include <iostream>
#include <vector>

class Name_value{
    public:
        std::string names;
        int scores;
        Name_value(std::string n, int s)
            : names(n), scores(s){} //Read more on page 183

};
