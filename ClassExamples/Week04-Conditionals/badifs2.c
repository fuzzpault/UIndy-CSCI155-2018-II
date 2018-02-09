/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: Examples of bad if statements.
*/
#include <stdio.h>

int main(){
	printf("Enter a number?\n");
	int number = 0.0;
	scanf("%d", &number);
	
	if(number = 10){ // Don't do this using an assignment operator (=), use == to check.
		printf("That number is 10!\n");
	}
	
	// Note number is now 10 because of the assignment in line 13.
	printf("number: %d\n", number);
	
	// This is the preferred way.
	if(number % 2 == 0){
		printf("That number is even!\n");
	}
	
	// This is OK, but only if on the same line.
	if(number % 2 == 1) printf("That number is odd!\n");
	
	// Note line 31 will ALWAYS be run because the end of the conditional is with the
	// ; on line 31.  ALWAYS use {} to prevent this issue.
	if(number % 2 == 1) 
		printf("That number is odd!\n");
		printf("That number is still odd!\n"); // Dont do this
		
	// This will be true if number is NOT 0.  Anything besides 0
	// is true.
	if(number){
		printf("number was true!\n");
	}


	return 0;	
}