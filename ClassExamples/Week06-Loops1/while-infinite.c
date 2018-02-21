/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Infinite loop because number is never changing in the loop.
*/
#include <stdio.h>

int main(){
	int number = 0;
	
	while(number < 15){
		printf("n: %d\n", number + 1);
	}
	
	return 0;
}