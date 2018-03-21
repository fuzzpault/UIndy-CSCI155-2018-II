/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Demo of copying an array.
*/
#include <stdio.h>

int main(){
	
	int numbers[10] = {1,2,3,4,5,4,3,2,1,0};
	int naps[10];

	int i = 0;
	for(i = 0; i < 10; i++){
		naps[i] = numbers[i];
	}
	
	numbers[2] = 998;
	
	for(i = 0; i < 10; i++){
		printf("%d ", numbers[i]);
	}
	printf("\n");
	for(i = 0; i < 10; i++){
		printf("%d ", naps[i]);
	}
	
	return 0;
}