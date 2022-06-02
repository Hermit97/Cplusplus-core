#include <cctype>
#include <cmath>
#include <exception>
#include <iostream>
#include <stdexcept>
#include <vector>

int main() {
    std::vector<int> v1;
    std::vector<int> v2;

    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    for(int n; std::cin >> n;)
	v2.push_back(n);

    std::cout << "v1 vector: \n";
    for(int i = 0; i < v1.size(); i++){
	std::cout << v1[i] << "\n";
    }

    std::cout << "v2 vector: \n";
    for(int i = 0; i < v2.size(); i++){
	std::cout << v2[i] << "\n";
    }


    //check if v2 elements match any of the v1 elements
    for(int i = 0; i < v1.size(); ++i){
	if(v2[1] == v1[i])
	    //But whereee? print out where they are equal
	    std::cout << "v2 and v1 are the same\n";

    }


}
