/*
	Name: Paul Talaga
	Date: Jan 26, 2018
	Desc: Does the power function.
	
	Compile this with the -lm flag at the end like:
	$ gcc pow.c -lm
	This includes the math library during the linking phase.
*/
#include <stdio.h>
#include <math.h>

int main(){


	float base = 0.0;
	float exponent = 0.0;
	printf("Enter a base:\n");
	scanf("%f", &base);
	printf("Enter an exponent:\n");
	scanf("%f", &exponent);
	
	printf("%f to the %f power is %f\n", base, exponent, pow( base,exponent) );
	
	
	return 0;
}