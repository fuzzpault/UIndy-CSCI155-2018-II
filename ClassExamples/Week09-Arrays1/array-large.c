/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: What happens when the array is too large?
*/
#include <stdio.h>
#define SIZE 10000000

int main(){
	int values[SIZE]; // The limit is about 4 MB
	
	values[0] = 1;
	
	int i = 0;
	for(i = 0; i < SIZE; i++){
		values[i+1] = values[i] + 2;
	}
	
	for(i = 0; i < SIZE; i++){
		printf("%d: %d \n", i,  values[i]);
	}
	
}