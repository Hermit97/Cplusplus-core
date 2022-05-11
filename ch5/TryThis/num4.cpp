#include <exception>
#include <iostream>
#include <stdexcept>

int main(){
  double sum = 0;
  double high_temp = -1000;
  double low_temp = 1000;
  int no_of_temps = 0;

  for(double temp; std::cin >> temp;){
    ++no_of_temps;
    sum += temp;
    if(temp > high_temp) high_temp = temp;
    if(temp < low_temp) low_temp = temp;
  }

  std::cout << "High temperature: " << high_temp << '\n';
  std::cout << "Low temperature: " << low_temp << '\n';
  std::cout << "Average temperature: " << sum/no_of_temps << '\n';
}
