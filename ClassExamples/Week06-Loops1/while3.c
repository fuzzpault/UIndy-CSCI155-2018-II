/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: A while loop is a pre-test loop, so if the conditional is false
		  it will never run the loop body.
*/
#include <stdio.h>

int main(){
	int number = 15;
	
	while(number < 15){
		printf("n: %d\n", number + 1);
		number++;
	}
	
	return 0;
}