/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Different ways of initializing an array.
*/
#include <stdio.h>

int main(){
	
	//int numbers[10] = {1130, 800, 630, 600, 0, 2, 1, 56, 9, 10};
	//int numbers[10] = {1130};
	int numbers[10] = {};
	//int numbers[] = {5,6,7,8,11};

	int i = 0;
	for(i = 0; i < 10; i++){
		printf("%d: %d \n",i,  numbers[i]);
	}
	
	return 0;
}