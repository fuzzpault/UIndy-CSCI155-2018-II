/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Demo of the relationship between arrays and pointers.
*/
#include <stdio.h>

int main(){
	
	int numbers[10] = {1,2,3,4,5,4,3,2,1,0};
	//int naps[5];
	int* naps = numbers;
	//naps = numbers;
	
	numbers[2] = 99;

	int i = 0;
	for(i = 0; i < 10; i++){
		printf("%d ", numbers[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%d ", naps[i]);
	}
	
	return 0;
}