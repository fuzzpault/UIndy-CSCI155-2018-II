/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: Range examples
*/
#include <stdio.h>

int main(){
	int number = 0;
	printf("Enter an integer!\n");
	scanf("%d", &number);
	
	if(number > 10 && number < 100){ //   10 < number < 100
		printf("That number is greater than 10 and less than 100\n");
	}
	
	// 10 < number < 100  DONT DO this as it reads it as
	// (10 < number) < 100 and 10 < number is either
	// true (1) or false (0)
	// (10 < number) || (number < 100) would be correct.
	if(10 < number < 100){ //   10 < number < 100   Don't do this!!!!!!!
		printf("That number is greater than 10 and less than 100!!!\n");
	}
	
	if(number < 10 || number > 100){ 
		printf("That number is not greater than 10 or greater than 100\n");
	}
	
	return 0;
	
}