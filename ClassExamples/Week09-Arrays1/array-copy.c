/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: The ONLY way to copy an array is to loop over all elemnents and copy
		  each.
*/
#include <stdio.h>
#define SIZE 10

int main(){
	int values[SIZE] = {};
	int pizza[SIZE] = {};

	// Initialize the values array
	int i = 0;
	for(i = 0; i < SIZE; i++){
		values[i] = i;
	}
	
	// Copy each value over
	for(i = 0; i < SIZE; i++){
		pizza[i] = values[i];
	}
	
	values[3] = 999999;
	
	
	
	
	printf("values: [");
	for(i = 0; i < SIZE; i++){
		printf("%d, ", values[i]);
	}
	printf("]\n");
	
	
	
	
	printf("pizza: [");
	for(i = 0; i < SIZE; i++){
		printf("%d, ", pizza[i]);
	}
	printf("]\n");
	
}