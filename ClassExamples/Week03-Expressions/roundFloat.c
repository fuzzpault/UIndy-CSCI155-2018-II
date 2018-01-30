/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: Demo of floating point rounding error.
*/
#include <stdio.h>

int main(){
	float a = 1458394;
	float b = 0.000095;
	printf("%f + %f = %f\n",a, b, a + b );
	// Note it does not include the b (small number) in the result!
	// The 'fix' is to use doubles so you have double the precision and it
	// can represent the result fully.
	
	return 0;
}