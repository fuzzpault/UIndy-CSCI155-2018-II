/*
	Name: Paul Talaga
	Date: Jan 23, 2018
	Desc: Hello world with 4 variables.
*/

#include <stdio.h>

int main(){
	
	char name[50];
	char activity[50];
	char food[5];
	int number_of_things = 0; // Good idea to assign as soon as you declare.
	
	
	printf("What is your name?\n");
	scanf("%s", name);
	printf("Hi %s, it is a rainy day.\n", name);
	
	printf("What do you like to do on a rainy day?\n");
	scanf("%s", activity);
	printf("%s is boring.\n", activity);
	
	printf("What is your favorite food?\n");
	scanf("%s", food);
	printf("%s is delicious.\n", food);
	
	printf("How many of %s do you eat in a day?\n", food);
	scanf("%d", &number_of_things);
	printf("%d is a bit excessive.\n", number_of_things);
	
	return 0;
	
}