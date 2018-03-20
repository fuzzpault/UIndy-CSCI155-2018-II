/*
	Name: Paul Talaga
	Date: March 6, 2018
	Desc: Array demo.
*/
#include <stdio.h>

int main(){
	int values[100];
	
	int* values2;
	
	values[0] = 1;
	
	int i = 0;
	for(i = 0; i < 99; i++){
		values[i+1] = values[i] * 2;
	}
	
	for(i = 0; i < 100; i++){
		printf("%d: %d \n", i,  values[i]);
	}
	
}