/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Example of infinite loop due to conditional never going false (neg).
*/
#include <stdio.h>

int main(){
	unsigned int number = 10;
	while(number >= 0){
		printf("n: %d\n", number);
		number--;
	}
	
	return 0;
}