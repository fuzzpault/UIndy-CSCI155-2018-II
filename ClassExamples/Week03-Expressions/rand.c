/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: Basic demo of random number generation.
*/
#include <stdio.h>

int main(){
	srand(time(0));
	
	printf("%d\n", rand());
	printf("%d\n", rand());
}