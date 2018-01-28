/*
	Name: Paul Talaga
	Date: Jan 26, 2018
	Desc: Finds the area of a rectangle.
*/
#include <stdio.h>

int main(){
	float left = 0.0;
	float bottom = 0.0;
	
	printf("What are the sides of your rectangle.\n");
	
	scanf("%f", &left);
	scanf("%f", &bottom);
	
	printf("The area of your rectangle is: %f\n", left * bottom);
	
	float area = left * bottom;
	
	printf("The area of your rectangle is: %f\n", area);
	
	return 0;
}