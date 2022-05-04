#include <iostream>

/*Test this program with a variety of values. Print out the values of area1 ,
area2 , area3 , and ratio . Insert more tests until all errors are caught. How
do you know that you caught all errors? This is not a trick question; in this
particular example you can give a valid argument for having caught all errors.*/

void error(std::string errorMessage){
  std::cout << errorMessage;
}

int area(int length, int width){
  if(length <= 0 || width <= 0) error("non-positive area() arguemnt");
  return length * width;
}

int framed_area(int x, int y){
  constexpr int frame_width = 2;
  if (x - frame_width <= 0 || y - frame_width <= 0)
    error("non-positive area() arguements called  by framed_area()");
  return area(x - frame_width, y - frame_width);
}

int f(int x, int y, int z){
  int area1 = area(x, y);
  if (area1 <= 0)
    error("non-positive area");
  int area2 = framed_area(10, z);
  int area3 = framed_area(y, z);
  //double ratio = double (area1) / area3;
  int ratio = (area1) / area3;

  std::cout << "Area1 is: " << area1 << "\n";
  std::cout << "Area2 is: " << area2 << "\n";
  std::cout << "Area3 is: " << area3 << "\n";
  std::cout << "Ratio is: " << ratio << "\n";
  return ratio;
  /*Errors caught here are, returning double with the method type is int. casting the result of area1 / area3 as a double. */
}

int main(){
    f(100, 10, 20);
}
