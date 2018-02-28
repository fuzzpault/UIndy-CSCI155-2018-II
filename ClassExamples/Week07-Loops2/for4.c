/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Printing the powers of two.
*/
#include <stdio.h>

int main(){
	int a = 0;
	int number;
	scanf("%d", &number);
	for(a = 1; a < number; a = a * 2){
		printf(" %d ", a); 
	}
	
	return 0;
}