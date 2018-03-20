/*
	Name: Paul Talaga
	Date: March 6, 2018
	Desc: Array demo.
*/

#include <stdio.h>

#define SIZE 200

int main(){
	int values[SIZE];
	
	int i = 0;
	
	for(i = 0; i < SIZE; i++){
		values[i] = i * 7;
	}
	
	
	for(i = 0; i < SIZE; i++){
		values[i] = values[i] * 2;
	}
	
	for(i = 2; i < SIZE; i++){
		values[i] = 666;
	}
	
	values[9] = 99;
	
	for(i = 0; i < SIZE; i++){
		printf("%d: %d \n", i, values[i]);
	}
	
	printf("\n");
}