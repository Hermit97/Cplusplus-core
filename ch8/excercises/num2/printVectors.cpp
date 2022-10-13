#include <iostream>
#include <vector>

/*Write a function print() that prints a vector of int s to cout . Give it two
arguments: a string for “labeling” the output and a vector .
*/

void print(std::string label, std::vector<int> bunchOfNums){
	int s;
	char quit = 'q';
	int change = static_cast<int>(quit);
	
	while(std::cin){
		std::cout << "Enter a number\n";
		std::cin >> s;

		if(std::cin.peek() == 'q')
			std::cout << "quit";
		bunchOfNums.push_back(s);

		/*while(!std::cin){
			if(std::cin.peek() == 'q')
				std::cout << "quit";

			bunchOfNums.pop_back();
			break;
		}*/

		
		if(s != int('q')){
			//if(std::cin.peek() == 'q')
			//	std::cout << "quit";

			bunchOfNums.pop_back();
			break;
		}else
			std::cout << "ERROR\n";

	}

	for(int i = 0; i < bunchOfNums.size(); i++){
		std::cout << label << ":" << bunchOfNums[i] << "\n";
	}

}

int main(){
	std::vector<int> bunchOfNums; 
	std::string l;
	l = "Numbers";
	print(l, bunchOfNums);
}
