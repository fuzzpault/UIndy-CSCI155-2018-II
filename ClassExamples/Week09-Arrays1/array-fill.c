/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Allowing the user to fill the array, but must be an exact number.
*/
#include <stdio.h>
#define SIZE 10

int main(){
	int values[SIZE] = {};
	
	int i = 0;
	printf("Enter %d integers.\n", SIZE);
	for(i = 0; i < SIZE; i++){
		scanf("%d", &values[i] );
	} 
	
	printf("[");
	for(i = 0; i < SIZE; i++){
		printf("%d, ", values[i]);
	}
	printf("]\n");
	
	int max_so_far = values[0];
	for(i = 1; i < SIZE; i++){
		if(values[i] > max_so_far){
			max_so_far = values[i];
		}
	}
	printf("The maximum value is: %d.\n", max_so_far);
	
}