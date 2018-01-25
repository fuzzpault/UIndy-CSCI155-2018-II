/*
	Name: Paul Talaga
	Date: Jan 25, 2018
	Desc: Expression demo to find the average of 2 numbers.
*/

#include <stdio.h>

int main(){
	float a = 0.0;
	float b = 0.0;
	
	printf("I'll find the average of two numbers!\n");
	
	printf("Give me a number: ");
	scanf("%f", &a);
	
	printf("Give me another number: ");
	scanf("%f", &b);
	
	float result = (a + b) / 2;	// Without the () it would do the / first,
								// giving the incorrect answer.
	
	printf("The average is %f\n;", result);
	
	
	
	
	
}