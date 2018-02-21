/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Number guessing game.
*/
#include <stdio.h>

int main(){
	
	srand(time(0));
	
	int guess = 0;
	int number = (rand() % 100) + 1;
	int try_count = 1;
	printf("What is your guess?  1-100?\n");
	scanf("%d", &guess);
	
	while(guess != number){
		printf("That is incorrect.\n");
		if(guess > number){
			printf("Your guess is too high!\n");
		}else{
			printf("Your guess is too low!\n");
		}
		printf("What is your guess?  1-100?\n");
		scanf("%d", &guess);
		try_count++;
	}
	
	printf("You guess it correct in %d tries.\n\n", try_count);
	
	return 0;
	
}