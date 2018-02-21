/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Solution to the exam problem
*/
#include <stdio.h>

int main(){
	printf("Give me a number!\n");
	int number = 0;
	scanf("%d", &number);
	
	// Pos/neg
	if(number > 0){
		printf("Number is positive\n");
	}else if(number < 0){
		printf("Number is negative\n");
	}else{
		printf("Number is zero\n");
	}
	
	if(number % 2 == 0){
		printf("Your number is even\n");
	}else{
		printf("Your number is horribly odd\n");
	}
	
	// 20 and 30 inclusive
	// if(20 <= number && number <= 30)
	if(number < 20 || number > 30){
		printf("That number is not between 20 and 30 inclusive.\n");
	}else{
		printf("That is between 20 and 30 inclusive.\n");
	}
	
	if(10 < number && number < 100){
		printf("Between 10 and 100 exclusive\n");
	}else{
		printf("Not between 10 and 100 exclusive\n");
	}
	
	if(number % 10 == 4){
		printf("That ended in a 4!\n");
	}else{
		printf("That's not a very good number.\n");
	}
	
	// Mod without mod
	while(number > 10){
		number = number - 10;
	}
	if(number == 4){
		printf("That ended in a 4 still!\n");
	}else{
		printf("That's not a very good number.\n");
	}
	
	
	printf("That is %d\n", number);
	
	
	
	return 0;
}