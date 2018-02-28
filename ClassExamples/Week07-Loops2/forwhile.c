/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Demo of using a for loop as an infinite loop.
*/
#include <stdio.h>

int main(){
	
	int number = 10;
	while(number >= 0){
		printf("n: %d ", number);
		number--;
	}
	
	number = 10;
	for(;;){   // while(1){
		printf("n: %d ", number);
		number--;
		if(number ==0)break; // Will break out of the loop.
	}
	
	printf("I got here!\n");
	
	
}