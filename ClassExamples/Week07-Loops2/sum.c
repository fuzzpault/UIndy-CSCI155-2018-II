/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Finding the sum of integers.
*/
#include <stdio.h>

int main(){
	printf("Enter numbers to sum:  (0 to end)\n");
	
	int number = 0;
	int count = 0;
	int sum = 0;
	scanf("%d", &number);
	
	while(number != 0){
		sum = sum + number;
		count++;
		scanf("%d", &number);
	}
	
	printf("Sum: %d Count: %d Avg: %f \n", sum , count, sum / (float)count);
	
}