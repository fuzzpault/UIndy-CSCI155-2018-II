/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Allow the user to enter a variable number of values.
*/
#include <stdio.h>
#define SIZE 100

int main(){
	
	int numbers[SIZE];
	int i = 0;
	int number_count = 0;
	
	// stop taking numbers when they put in a -1
	for(i = 0; i < SIZE; i++){
		scanf("%d", &numbers[i]);
		if(numbers[i] == -1){
			number_count = i;
			break;
		}
	}

	
	printf("[");
	for(i = 0; i < number_count; i++){
		printf("%d, ", numbers[i]);
	}
	printf("]\n");
	
}