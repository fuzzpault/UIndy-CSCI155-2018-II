/*
	Name: Paul Talaga
	Date: Jan 23, 2018
	Desc: Hello world with 4 variables.
*/
#include <stdio.h>

int main(void){
	
	char name[100];
	char color[100];
	char food[100];
	int times_a_day = 0;
	
	printf("What is your name?\n");
	scanf("%s", name);
	printf("Hello %s\n", name);
	
	printf("What is your favorite color?\n");
	scanf("%s", color);
	printf("Jeez %s, %s is a horrible color.\n", name, color);
	
	printf("What would you like to eat?\n");
	scanf("%s", food);
	printf("%s is really gross, you need better taste.\n", food);
	
	printf("How many times a day do you eat %s?\n", food);
	scanf("%d", &times_a_day);
	printf("%d seems like a lot.\n", times_a_day);
	
	return 0;
}