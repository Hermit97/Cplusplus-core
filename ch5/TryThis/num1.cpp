#include <iostream>

/*Test this program with a variety of values. Print out the values of area1 ,
area2 , area3 , and ratio . Insert more tests until all errors are caught. How
do you know that you caught all errors? This is not a trick question; in this
particular example you can give a valid argument for having caught all errors.*/

void error(std::string errorMessage){
  std::cout << errorMessage;
}

int framed_area(int x, int y){
  constexpr int frame_width = 2;
  if (x - frame_width <= 0 || y - frame_width <= 0)
    error("non-positive area() arguements called  by framed_area()");
  return area(x - frame_width, y - frame_width));
}

int area(int length, int width){
  if(length <= 0 || width <= 0) error("non-positive area() arguemnt");
  return length * width;
}

int f(int x, int y, int z){
  int area1 = area(x, y);
  if (area1 <= 0)
    error("non-positive area");
  int area2 = framed_area(1, z);
  int area3 = framed_area(y, z);
  double ratio = double (area1) / area3;
  return ratio;
}

int main(){
  error("Hello\n");

}
