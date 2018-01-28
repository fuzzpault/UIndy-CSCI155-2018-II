/*
	Name: Paul Talaga
	Date: Jan 26, 2018
	Desc: What will this print to the screen?
*/
#include <stdio.h>

int main(){
	int burgers = 5;
	printf("burgers: %d\n", burgers);
	{
		int burgers = 10;
		printf("burgers: %d\n", burgers);	
		{
			int burgers = 15;
			printf("burgers: %d\n", burgers);
		}
		printf("burgers: %d\n", burgers);
	}
	printf("burgers: %d\n", burgers);
}