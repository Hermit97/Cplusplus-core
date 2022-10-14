#include <iostream>
#include <vector>

/*Write a function print() that prints a vector of int s to cout . Give it two
arguments: a string for “labeling” the output and a vector .
*/

void print(std::string label, std::vector<int> bunchOfNums){
	int s;
	std::string quit;
	while(std::cin){
		std::cout << "Enter a number or q to quit\n";
		std::cin >> quit;
		if(quit == "q"){
			//bunchOfNums.pop_back();
			break;
		}else {
			std::cin >> s;
			bunchOfNums.push_back(s);
		}

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
