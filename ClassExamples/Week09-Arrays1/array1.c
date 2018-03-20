/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Using a for loop to fill an array based on an initial element.
*/
#include <stdio.h>

int main(){
	int values[100];
	
	values[0] = 1;
	
	int i = 0;
	for(i = 0; i < 99; i++){ // Note we don't go to the end because in the loop
		values[i+1] = values[i] + 2; // is an i+1
	}
	
	for(i = 0; i < 100; i++){
		printf("%d: %d \n", i,  values[i]);
	}
	
}