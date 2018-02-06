/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: Range example.
*/
#include <stdio.h>

int main(){
	int number = 0;
	printf("Enter an integer!\n");
	scanf("%d", &number);
	
	if(number > 10 && number < 100){ //   10 < number < 100
		printf("That number is greater than 10 and less than 100\n");
	}
	
	// This next conditional will COMPILE, but not work correctly.
	// It will evaluate the 10 < number first, and use the result 
	// (false is 0, 1 is true) to compare to 100
	// Compile with warnings:  gcc -Wall range.c  
	// and this will show a warning.
	if(10 < number < 100){ //   10 < number < 100   Don't do this!!!!!!!
		printf("That number is greater than 10 and less than 100!!!\n");
	}
	
	// Note the switch from && (and) to || (or) when doing an outside range.
	if(number < 10 || number > 100){ //   10 < number < 100
		printf("That number is not greater than 10 or greater than 100\n");
	}
	
	return 0;
	
}