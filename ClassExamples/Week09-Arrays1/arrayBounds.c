/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Demo of how you can go outside an array and look at memory.
		  If you go too far, it will cause a segfault!
*/
#include <stdio.h>

int main(){
	int a = 34;
	int b = 90;
	
	int numbers[5];
	int i = 0;
	for(i = 0; i < 5; i++){
		numbers[i] = i;
	}
	
	int bob = 56;
	int mary = 89;
	
	for(i = -5; i < 7; i++){ // Look outside the array as well.
		printf("%d: %d \n",i,  numbers[i]);
	}
	
	return 0;
}