/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Do-while loop examples.
*/
#include <stdio.h>

int main(){
	int a = 0;
	int number;
	scanf("%d", &number);
	do{
		printf("hungry ");
		a++;
	}while(a < number);
	
	printf(" hippos.\n");
	return 0;
}