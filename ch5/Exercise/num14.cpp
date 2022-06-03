/*Read (day-of-the-week,value) pairs from standard input. For example:
Tuesday 23 Friday 56 Tuesday –3 Thursday 99
Collect all the values for each day of the week in a vector<int> . Write out
the values of the seven day-of-the-week vector s. Print out the sum of the
values in each vector . Ignore illegal days of the week, such as Funday ,
but accept common synonyms*/

#include <iostream>
#include <vector>

const std::vector<int> values;

void getDays(std::vector<int> days){
    for(int i = 0; i < 7; ++i)
        days.push_back(i);
}

int main(){


}
