/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Solution to exam problem.
*/
#include <stdio.h>

int main(){
	int number = 0;
	printf("Enter an integer\n");
	scanf("%d", &number);
	
	// Pos/neg/zero
	if(number > 0){
		printf("The number is positive!\n");
	}else if(number == 0){
		printf("The number is zero!\n");
	}else{
		printf("The number is negative!\n");
	}
	
	// Even/odd
	if(number % 2 == 1){
		printf("The number is odd.\n");
	}else{
		printf("The number is even.\n");
	}
	
	// 10/20
	if(number >= 10 && number <= 20){
		printf("That number is between 10 and 20 inc.\n");
	}else{
		printf("That is not in that range.\n");
	}
	
	// 20 and 100
	/*if(number > 20 || number < 100){
		//return 0;
	}else if(number > 20 && number < 100); */
	if(number <= 20 || number >= 100){
		printf("That is not in the range 20 and 100 ex.\n");
	}else{
		printf("That is in the range 20 and 100.\n");
	}
	
	if(number % 10 == 0){
		printf("That ends in a 0\n");
	}else{
		printf("That does NOT end in a zero\n");
	}
	
	
	return 0;
}