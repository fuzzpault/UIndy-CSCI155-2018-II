/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: What if a function says it returns an int and doesn't?
		  Using a function return value in a conditional.
*/
#include <stdio.h>

int leviHapiness(){
	
}

int leviIsHappy(){
	printf("Is Levi happy?\n");
	int input = 0;
	scanf("%d", &input);
	return input == 1;
}

main(){
	//printf("%d", leviHapiness() );
	if( leviIsHappy()  ){
		printf(" Finally he is happy.\n");
	}else{
		printf("That's sad, he needs a donut.\n");
	}
}