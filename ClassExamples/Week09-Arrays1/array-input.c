/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Enter a specific number of values.
*/
#include <stdio.h>

int main(){
	
	//int numbers[10] = {-1130, 800, 630, 600, 50, 2, 1, 56, 9, 10};
	int numbers[10];
	int i = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &numbers[i]);
	}

	
	printf("[");
	for(i = 0; i < 10; i++){
		printf("%d, ", numbers[i]);
	}
	printf("]\n");
	
}