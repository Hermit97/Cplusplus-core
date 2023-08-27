/*Write a program that finds the min, max, and mode of a sequence of
strings.*/

#include <iostream>
#include <vector>

void bubble_sort(std::vector<int> num){
    for(int i = 0; i < num.size(); ++i){
	if(num[i] > num[i+1]){
	    int temp = num[i];
	    num[i] = num[i+1];
	    num[i+1] = num[i];
	}
    }
}
int find_min(std::vector<int> num){
    bubble_sort(num);
    int min = num[0];
    return min;
    
}

int find_max(std::vector<int> num){
    int end = num.size();
    int max = num[end];
    return max;
}

int find_mode(std::vector<int> num) {
    int mode;
    return mode;

}

int main(){
    std::vector<int> numbers;
    int n;
    while(std::cin >> n)
	numbers.push_back(n);

    std::cout << "Min is " << find_min(numbers) << "\n";


}
