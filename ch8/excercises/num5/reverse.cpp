/*Write two functions that reverse the order of elements in a vector<int> .
For example, 1, 3, 5, 7, 9 becomes 9, 7, 5, 3, 1. The first reverse function
should produce a new vector with the reversed sequence, leaving its orig-
inal vector unchanged. The other reverse function should reverse the
elements of its vector without using any other vector s (hint: swap ).
*/

#include <iostream>
#include <vector>

class ReverseVector{
    public:
        std::vector<int> originalVector();
        std::vector<int> reVector(std::vector<int>& v);
};

std::vector<int> ReverseVector::originalVector(){
    std::vector<int> originalVector;
    std::cout << "Enter values for the first vector\n";
    std::string num;
    std::string quit = "q";
    int number;
    
    while(num != quit){
        std::cout << "Enter a number for the vector\n"; 
        std::cin >> num;
        if(num == quit)
            break;
        number = std::stoi(num);
        originalVector.push_back(number);
    }

    for(int i = 0; i < originalVector.size(); ++i){
        std::cout << originalVector[i] << "\n";
    }

    return originalVector;
}

std::vector<int> ReverseVector::reVector(std::vector<int> &v){
    std::vector<int> newVector;  
    ReverseVector r1;
    int vectorBigNum;
    int vectorSmallNum;
    
    //Could try bubble sort to get the largest i first push it then the low one at the end.
    for(int i = 0; i < r1.originalVector().size(); ++i){
        int vectorSize = r1.originalVector().size();
        if(vectorSize 
    }
    return newVector;
}

int main(){
    ReverseVector r1;
    r1.originalVector();
}
