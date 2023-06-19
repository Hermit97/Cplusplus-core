#include <iostream>
#include <string>
#include <syscall.h>
//print the current word repeadedly. 
int main(){
	std::string current;
	std::string previous = " ";
	int counter = 0;
	int firstCount = 0;

	while(std::cin >> current){
		if(current == "q")
			return 0;
		if(firstCount == 0)
			std::cout << "The first word is " << current << "\n";
		if(current == previous)
			std::cout << "The current word is " << current << "\n";
		else if(counter > 0 && current != previous)
			std::cout << "The current word does not match the previous word\n";
		++counter;
		++firstCount;
		previous = current;
	}
}
