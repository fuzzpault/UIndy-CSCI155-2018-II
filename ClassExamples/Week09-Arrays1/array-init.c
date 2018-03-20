/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Using an array initializer.
*/
#include <stdio.h>
#define SIZE 10

int main(){
	int values[SIZE] = {}; // Sets all values to 0 in the array.
	
	int i = 0;
	/*for(i = 0; i < SIZE; i++){
		values[i] = 8;
	} */
	
	printf("[");
	for(i = 0; i < SIZE; i++){
		printf("%d, ", values[i]);
	}
	printf("]\n");
	
}