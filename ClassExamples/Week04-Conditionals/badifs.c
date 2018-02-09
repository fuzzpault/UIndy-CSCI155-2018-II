/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: Examples of bad if statements.
*/
#include <stdio.h>

int main(){
	int number = 0;
	printf("Enter an integer!\n");
	scanf("%d", &number);
	
	if(number % 2 == 0){
		printf("That is even.\n");
		if(number % 3 == 0){
			printf("That is also a multiple of 3.\n");
			// Note this will only be run when a number is even AND it is a multiple of 3.
			// It is better to not nest.
		}
	}
	
	// Even though this works (no {}), DON'T do this as it leads to confusing execution.
	if(number % 2 == 0) 
		printf("That is even.\n");
	
	// ALWAYS use {} with an if statement!
	if( number == 2){
		printf("Number is 2! %d\n", number);
	}
	
	return 0;
}