/*Can we declare a non-reference function argument const (e.g., void
f(const int); )? What might that mean? Why might we want to do that?
Why don’t people do that often? Try it; write a couple of small programs
to see what works.*/


/*Yes you can declare a non-reference function arguemnt const. It would mean that the argument wont change
 *because its a const and it wont reference anything since its a non-reference. Instead it will
 *make copies. People often use this when they are not dealing with a large amount of data. Using copies can
 *make the program run faster in these kind of cases.  Reason being pass by value skips steps in the
 *instruction code making it execute faster.
 *does not need to deal with referencing.*/

#include <iostream>
/*People dont do this often because it can cause errors when trying to change the intial value of i*/
void f(const int i){
    std::cout << i << "\n";
}

int main(){
    int x = 4;
    f(x);


}
