/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Number guessing game.
*/
#include <stdio.h>

int main(){
	srand(time(0));
	
	int secret = rand() % 100 + 1;
	int guess = 0;
	int num_guesses = 1;
	printf("Give me your guess from 1-100\n");
	scanf("%d", &guess);

	
	while(guess != secret){
		if(guess < secret){
			printf("Too Low!\n");
		}else{
			printf("Too High!\n");
		}
		printf("Give me your guess from 1-100\n");
		scanf("%d", &guess);
		num_guesses++;
		if(num_guesses > 6){
			printf("Are you st");
			int count = 6;
			while(count < num_guesses){
				printf("u");
				count++;
			}
			printf("pid ?\n");
		}
	}
	
	printf("Nice job!\n\n");
	printf("You guessed %d times.\n", num_guesses);
	
}