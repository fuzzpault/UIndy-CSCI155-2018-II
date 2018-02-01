/*
	Name: Paul Talaga
	Date: Feb 1, 2018
	Desc: Prints the area and circumference of a circle given its radius.
			Compile with:
			gcc circle.c -lm
*/
#include <stdio.h>
#include <math.h>

#define PI2 3.14159		// The (older) way of doing a constant

int main(){
	
	const float PI = 3.1415;	// The newer better way.
	
	float r = 0;
	printf("What is the radius of your circle?");
	scanf("%f", &r);
	
	printf("The area is: %f\n", PI * r * r);	// r * r is the same as r^2
	printf("The area is: %f\n", PI * pow(r,2) );// How you can do powers
	printf("The circumference is: %f\n", 2 * PI * r);
	
	return 0;
}