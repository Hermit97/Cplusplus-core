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
        //std::vector<int> reVector(std::vector<int>& v);
        std::vector<int> reVector();
        void swap(int x, int y);
};

void ReverseVector::swap(int x, int y){
    int temp = x;
    x = y;
    y = temp;
}


//This function is gettingv alled later on in a loop causing it to keep looping. FIX That

std::vector<int> ReverseVector::originalVector(){
    std::vector<int> originalV;
    std::cout << "Enter values for the first vector\n";
    std::string num;
    std::string quit = "q";
    int number;
    bool start = true; 
    while(start){
        std::cout << "Enter a number for the vector\n"; 
        std::cin >> num;
        if(num == quit)
            start = false;
        //number = std::stoi(num);
        number = atoi(num.c_str());
        originalV.push_back(number);
    }

    std::cout << "This is the old vector\n";
    for(int i = 0; i < originalV.size(); ++i){
        std::cout << originalV[i] << "\n";
    }
    return originalV;
}

std::vector<int> ReverseVector::reVector(){
    std::vector<int> newVector;  
    ReverseVector r1;
    int vectorBigNum;
    int vectorSmallNum;
    
    int vectorSize = r1.originalVector().size();
    //Could try bubble sort to get the largest i first push it then the low one at the end.
    for(int i = 0; i < vectorSize; ++i){
        int x = i;
        int y = i + 1;
        swap(x, y);
        newVector.push_back(i + 1);
    }
    return newVector;
}

void printNewVector(){
    ReverseVector r1;
    std::vector <int> newV = r1.reVector();

    std::cout << "This is the same vector reversed\n";
    for(int i = 0; i < r1.reVector().size(); ++i){
        std::cout << newV[i] << "\n";
    }
}

int main(){
    ReverseVector r1; 
    r1.originalVector();
    r1.reVector();
    printNewVector();

    
    
}
