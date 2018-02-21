/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Demo of infinte loop due to a ; after the while statement.
*/
#include <stdio.h>

int main(){
	int number = 1;
	while(number <= 100);{
		printf("n: %d\n", number);
		number++;
	}
	
	return 0;
}