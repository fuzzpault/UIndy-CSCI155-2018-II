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
		printf("That number is even.\n");
	}else{  // else if(number % 2 == 1)
		printf("That number is odd.\n");
	}
	
	int i = 2;
	int is_prime = 1;
	// Will check all values from 2 up to number-1 to see if it divides evenly
	for(i = 2; i < number; i++){
		if(number % i == 0){
			printf("That number is a multiple of %d.  %d * %d = %d \n", i, i, number/i , number);
			is_prime = 0;	// Found a divisor!  Must not be a prime!
		}
	}
	
	// Were any divisors found?
	if(is_prime){
		printf("That number is prime!!!!\n");
	}
	
	// Originally we found outselves copy and pasting the code below, and changing
	// the number to find the factors, but replaced it with a for loop to 
	// check all number less than it (excluding 1).
	
	/*if(number % 3 == 0){
		printf("That number is a multiple of 3.  3 * %d = %d \n", number/3 , number);
	}*/
}