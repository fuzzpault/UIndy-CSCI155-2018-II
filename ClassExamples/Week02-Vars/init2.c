/*
	Name: Paul Talaga
	Date: Jan 26, 2018
	Desc: Demo for initializing variables.
*/
#include <stdio.h>

int main(){
	int burgers;	// What is the value now?  Undefined!
	burgers = burgers + 5;
	printf("burgers: %d\n", burgers);
	burgers = 7;
	printf("burgers: %d\n", burgers);
}