/*
	Name: Paul Talaga
	Date: Feb 8, 2018
	Desc: Sample mini-RPG program using conditionals, randomness,
		  and variables.
*/
#include <stdio.h>

int main(){
	
	srand(time(0));
	
	float gpa = 4;
	int number_of_digits = 10;
	
	printf("Welcome to CSCI 155!\n\n");
	printf("Do you want to speak up in class? 0/1\n");
	int answer = 0;
	scanf("%d", &answer);
	
	if(answer == 1){
		printf("Wow that is rare, +1 to your GPA\n");
		gpa = gpa + 1;
	}else{
		printf("Ok, your choice, please give me your hand.\n");
		number_of_digits = number_of_digits - 1;
	}
	
	printf("GPA: %f Fingers: %d\n", gpa, number_of_digits);
	
	printf("Do you want to eat pizza tonight?");
	scanf("%d", &answer);
	if(answer == 1){
		if( (rand() % 100) < 20){
			printf("Anchovy pizza is only available!");	
		}
	}else{
		printf("Ok, but you'll get hungry!\n");
	}
	
	return 0;
}