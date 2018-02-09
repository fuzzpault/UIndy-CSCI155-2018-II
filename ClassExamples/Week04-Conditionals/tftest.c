/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: Be able to evaluate if an expression (like below) is true
		  or false based on different variable values.
*/
#include <stdio.h>

int main(){
	int a = 0;
	int b = 1;
	
	printf("%d", ((a < b) || (a % 3 == 0)) && b % 2 == 0 );
	
	// (a < b) || (a % 3 == 0) && b % 2 == 0 
}