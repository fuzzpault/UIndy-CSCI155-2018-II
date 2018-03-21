/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Where are the array elements in memory?
*/
#include <stdio.h>

int main(){
	float numbers[5];
	
	numbers[3] = 89.3;
	
	int i = 0;
	for(i = 0; i < 5; i++){
		printf("%f %p\n", numbers[i], &numbers[i]);
	}
	
	return 0;
}