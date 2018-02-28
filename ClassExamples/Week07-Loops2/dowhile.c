/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Do-while loop examples.
*/
#include <stdio.h>

int main(){
	int number = 1;
	do{
		printf("Enter an odd number to escape!\n");
		scanf("%d", &number);
	}while(number % 2 == 0);
	
	printf("You got out!\n");
}