/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Demo of using a while loop to validate user input.
*/
#include <stdio.h>

int main(){
	printf("Enter a number that ends in a 7\n");
	int number = 0;
	int wrong_ans = 1;
	scanf("%d", &number);
	
	while(number % 10 != 7){
		if(wrong_ans >= 10){
			printf("Please wake up.\n");
		}
		printf("That doesn't end in a 7, please try again!\n");
		scanf("%d", &number);
		wrong_ans++;
	}
	
	printf("Thanks!");
}