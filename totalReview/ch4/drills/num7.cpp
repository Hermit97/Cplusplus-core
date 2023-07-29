// sum, keep track of the number of entries and print both.
#include <iostream>
#include <pthread.h>
#include <vector>

bool almost_equal(double num1, double num2, double temp) {
  double diff = num1 - num2;

  if (diff < temp)
    diff = -diff;

  return diff < temp;
}
int main() {
  double num, largest, smallest, sum;
  int small_counter, larger_counter, total_values;
  small_counter = 0;
  larger_counter = 0;
  int counter = 0;
  std::string userUnit;
  largest = 0.0;
  smallest = 0.0;
  double cm_to_m;
  double convert;
  std::vector<double> numbers;
  std::vector<double> numbers_converted_m;
  std::vector<std::string> units = {"cm", "m", "in", "ft"};
  std::vector<std::string> illegalUnits = {"y", "yards", "meter", "km",
                                           "gallons"};
  std::cout << "Enter a number and its unit: "
            << "\n";
  while (std::cin >> num >> userUnit) {
    // numbers.push_back(num);

    for (int i = 0; i < illegalUnits.size(); ++i) {
      if (userUnit == illegalUnits[i]) {
        std::cout << "Illegal units entered try again.\n";
        std::cin >> num >> userUnit;
      }
    }

    numbers.push_back(num);
    ++larger_counter;
    //++small_counter;
    total_values = larger_counter + small_counter;

    if (userUnit == units[0]) {
      convert = num / 100;
      std::cout << num << units[0] << " converted to " << convert << "m\n";
      // Convert in to cm
    } else if (userUnit == units[1]) {
      convert = num * 2.54;
      std::cout << num << units[1] << " converted to " << convert << "cm\n";
      // Convert m to ft
    } else if (userUnit == units[2]) {
      convert = num * 3.281;
      std::cout << num << units[2] << " converted to " << convert << "ft\n";
      // Convert ft to in
    } else if (userUnit == units[3]) {
      convert = num * 12;
      std::cout << num << units[3] << " converted to " << convert << "in\n";
    }

    if (num > largest || numbers.size() == 1) {
      largest = num;
    }
    if (num < smallest || numbers.size() == 1) {
      smallest = num;
    }

    std::cout << "The largest number so far is " << largest
              << ", the smallest is " << smallest << "\n";
    if (numbers.size() > 1) {
      if (almost_equal(largest, smallest, 0.01))
        std::cout << "The numbers are almost equal\n";
      else
        std::cout << "The numbers do not differ by less than 0.01\n";
    }

    // convert all values in the numbers vector to meters and push them into new
    // vector.
    for (int i = counter; i < numbers.size(); ++i) {
      if(userUnit == units[0]){
        double cm_to_m = numbers[i] / 100;
        numbers_converted_m.push_back(cm_to_m);
        //why is the cm number being considered a m value as well?
      }else if (userUnit == units[1]) {
        std::cout << "--------------------\n";
        double m_to_m = numbers[i];
        std::cout << m_to_m
                  << " value does not change since its already an m.\n";
        numbers_converted_m.push_back(m_to_m);
      }else if(userUnit == units[2]){
        double in_to_m = numbers[i] * 2.54;
        numbers_converted_m.push_back(in_to_m);
      }else if(userUnit == units[3]){
       double ft_to_m  = numbers[i] * 12;
       numbers_converted_m.push_back(ft_to_m);
      }
    }
    sum = largest + smallest;
    counter++;
  }

  std::cout << "The sum of all of the entries are " << sum << "m\n";
  std::cout << "The number of values entered are " << numbers.size() << "\n";
  std::cout << "Here are all the vector values of numbers converted to meters "
            << "\n";
  for (int i = 0; i < numbers_converted_m.size(); ++i) {
    std::cout << numbers_converted_m[i] << "m\n";
  }

  std::cout << "-------------------------------\n";
  //print out meters vector more neatly
  std::string comma = ",";
  std::string empty = "";
  for(int i = 0; i < numbers_converted_m.size(); ++i){
    if(numbers_converted_m.size() - 1 == i){
      std::cout << numbers_converted_m[i] <<"m"<< empty;
    }else{
      std::cout << numbers_converted_m[i] <<"m"<< comma;

    }
  }
  std::cout << "\n";
  std::cout << numbers_converted_m.size() << "\n";

  return 0;
}
