/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Counting hippos, down or up.
*/
#include <stdio.h>

int main(){
	int a = 0;
	int number;
	scanf("%d", &number);
	for(a = 1; a <= number; a++){
		printf("hungry %d ", a); // a + 1
	}
	
	printf("\n");
	for(a = number; a > 0; a--){
		printf("hungry %d ", number - a + 1); // a + 1
	}
	
	printf(" hippos.\n");
	return 0;
}