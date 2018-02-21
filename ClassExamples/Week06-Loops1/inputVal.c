/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Demo of using a while loop to validate user input.
*/
#include <stdio.h>

int main(){
	int number = 0;
	printf("Give me an even number\n");
	scanf("%d", &number);
	
	while(number % 2 != 0){
		printf("You need to enter an even number!\n");
		scanf("%d", &number);
	}
	
	printf("Thanks!\n\n");
	
	return 0;
}