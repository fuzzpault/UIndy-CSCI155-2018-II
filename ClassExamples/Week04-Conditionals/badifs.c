/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: Will tell you if a number is even or odd, it's factors, and if
		  if it is prime.
*/
#include <stdio.h>

int main(){
	int number = 0;
	printf("Enter an integer!\n");
	scanf("%d", &number);
	
	if(number % 2 == 0){
		printf("That is even.\n");
		// If it is also a multiple of 3, print that out.
		// Note this will not be triggered if 9 is entered because 9 is not even.
		if(number % 3){
			printf("That is also a multiple of 3.\n");
		}
	}
	
	// NEVER do this!  Please always use {} OR place it on the same line.
	if(number % 2 == 0) 
		printf("That is even.\n");
		
	// This style is OK, if on the same line.
	if( number == 2)printf("Number is 2! %d\n", number);
	
	
	return 0;
}