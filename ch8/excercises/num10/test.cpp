#include <iostream> 
#include <vector>

void print(std::vector<int> v){
  for(int i = 0; i < v.size(); ++i){
    std::cout << v[i] << "\n";
  }
}

//pass by value
void setVector(std::vector<int> v){
  int x;
  std::cin >> x;
  v.push_back(x);

  std::cout << v.size() << "\n";
  std::cout << "-------------------\n";
  print(v);
}

int main(){
  std::vector<int> number;
  setVector(number);

}
