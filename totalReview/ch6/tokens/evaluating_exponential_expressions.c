#include "stdio.h"

/*(1/8)^-8*/
/*It takes 4 ^ 3 but returns 32 instead of 64 because of power logic. mid should take the new total value and multiplayu it by 4 instead of it keep doing 4 * 4*/

int power(int num, int exponent){
	int mid;
	int total = num;
	mid = num * num;
	for(int i = 1; i < exponent; ++i){
		total = total * num;
	}
	return total;
}
/*4 ^ 2 = 16 i = 0;
 4 ^ 3 = 64 i = 1*/

void num1(){
	int base = -4;
	int total;
	total = power(base,3);
	printf("%d\n", total);
}

void num2(){
	
}

int main(){
	num1();
	
}
