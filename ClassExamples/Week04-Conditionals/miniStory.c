/*
	Name: Paul Talaga
	Date: Feb 8, 2018
	Desc: Sample mini-RPG program using conditionals, randomness,
		  and variables.
*/
#include <stdio.h>

int main(){
	srand(time(0));
	
	int life = 90;
	printf("Should I get dressed today? 0/1");
	int input = 0;
	scanf("%d", &input);
	
	if(input == 0){
		printf("You should probably go back to bed.\n");
		printf("Life -10.");
		life = life - 10;
	}else{
		printf("That's a good choice!\n");
	}
	printf("Life: %d\n", life);
	
	if(rand() % 10 < 2){
		printf("You spilled your coffee!\n");
		life = life - 10;
	}else{
		printf("The coffee was perfect this morning!\n");
		life = life + 10;
	}
	
	printf("Life: %d\n", life);
}