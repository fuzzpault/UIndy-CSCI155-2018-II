#include <stdio.h>
#define SIZE 100
/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Calculates the Fibinnoci sequence using an array.
*/

int main(){
	unsigned long values[SIZE];
	
	values[0] = 1;
	values[1] = 1;
	
	int i = 0;
	for(i = 2; i < SIZE; i++){
		values[i] = values[i-1] + values[i-2];
	}
	
	for(i = 0; i < SIZE; i++){
		printf("%d: %lu \n", i,  values[i]);
	}
	
}