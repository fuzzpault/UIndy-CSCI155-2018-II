/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: Examples of modulo and finding if a number is prime.
*/
#include <stdio.h>

int main(){
	int number = 0;
	printf("Enter an integer!\n");
	scanf("%d", &number);
	
	if(number % 2 == 0){
		printf("That number is even.\n");
	}else{  // else if(number % 2 == 1)
		printf("That number is odd.\n");
	}
	
	int i = 2;
	int is_prime = 1;
	for(i = 2; i < number; i++){
		if(number % i == 0){
			printf("That number is a multiple of %d.  %d * %d = %d \n", i, i, number/i , number);
			is_prime = 0;
		}
	}
	
	if(is_prime){
		printf("That number is prime!!!!\n");
	}
	
	/*if(number % 3 == 0){
		printf("That number is a multiple of 3.  3 * %d = %d \n", number/3 , number);
	}*/
}