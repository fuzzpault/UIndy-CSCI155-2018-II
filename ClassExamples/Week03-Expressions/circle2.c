/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: Calculate the area and circumfrence of a circle.
		  Demonstrates the use of constants
*/

#include <stdio.h>
#include <math.h>

#define PI2 3.14159  // Old way - think search/replace

int main(){
	
	const float PI = 3.14159; // This is PI  - new way
	float r = 0.0;
	
	printf("What is the radius of your circle?\n");
	scanf("%f", &r);
	
	// area
	printf("The area is: %f \n", PI2 * pow(r,2) );
	printf("The area is: %f \n", PI * r * r );
	// circumference
	printf("The circumference is: %f \n", 2 * PI * r);
	
	return 0;
}