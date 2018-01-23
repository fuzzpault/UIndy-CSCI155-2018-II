/*
	Name: Paul Talaga
	Date: Jan 23, 2018
	Desc: Scope demo
*/

#include <stdio.h>

int main(){
	
	int fav_number = 0;
	
	printf("What is your favorite number?\n");
	scanf("%d", &fav_number);
	printf("%d is pretty awesome.\n", fav_number);
	// New scope starts with the {
	{
		// Because we're in a new scope we can declare another variable
		// with the same name.  Line 22 will use this one rather than the 
		// one declared on 11 above.
		// If 'int' wasn't there a new variable wouldn't be created and all
		// uses of it would be the declared on 11 above.
		int fav_number = 25;  
		printf("I'm inside this curly brace.\n");
		printf("%d is pretty awesome again.\n", fav_number);
	}
	
	printf("%d is pretty awesome still again.\n", fav_number);
	
	
	
	return 0;
	
}