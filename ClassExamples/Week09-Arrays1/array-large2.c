/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Demo of an array that is too big for the stack memory
*/
#include <stdio.h>
#define SIZE 2092000   // Limit is 8MB

int main(){
	float numbers[SIZE];
	
	printf("That is %f KB\n",(float)SIZE * 4 / 1024);
	printf("That is %f MB\n",(float)SIZE * 4 / 1024 / 1024);
	printf("sizeof: %lu\n", sizeof(numbers));
	
	int i = 0;
	float sum = 0;
	for(i = 0; i < SIZE; i++){
		sum = sum + numbers[i];
		//printf("%f %p\n", numbers[i], &numbers[i]);
	}
	printf("sum: %f\n", sum);
	
	return 0;
}