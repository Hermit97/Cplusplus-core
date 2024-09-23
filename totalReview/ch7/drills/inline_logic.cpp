#include <iostream>

inline int add(int a, int b){
  int sum = a + b;
  return sum;
}

int main(){
  int a = 3;
  int b = 4;
 int result =  add(a,b);
 return result;
}
