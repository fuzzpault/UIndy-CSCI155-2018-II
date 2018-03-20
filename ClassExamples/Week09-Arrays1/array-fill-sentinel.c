/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Allows a user to fill an array, or partially using a sentinel value.
*/
#include <stdio.h>
#define SIZE 1000

int main(){
	int values[SIZE] = {};
	
	int i = 0;
	int my_size = 0;
	printf("Enter %d integers.\n", SIZE);
	for(i = 0; i < SIZE; i++){
		int temp = 0;
		scanf("%d", &temp );
		if(temp == -1){
			break;
		}
		my_size++;
		values[i] = temp;
	} 
	
	printf("[");
	for(i = 0; i < my_size; i++){
		printf("%d, ", values[i]);
	}
	printf("]\n");
	
	int max_so_far = values[0];
	for(i = 1; i < my_size; i++){
		if(values[i] > max_so_far){
			max_so_far = values[i];
		}
	}
	printf("The maximum value is: %d.\n", max_so_far);
	
}