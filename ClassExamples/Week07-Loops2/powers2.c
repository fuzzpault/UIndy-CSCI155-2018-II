/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Demo of for loops.
*/
#include <stdio.h>

int main(){
	
	int i = 0;
	for(i = 2; i <= 200000; i = i * 2){
		printf("%d ", i);
	}
	
	printf("\n\n");
	
	for(i = 0; i <= 200; i = i + 2, printf("hi")){
		printf("%d ", i);
	}
	
	printf("\n\n");
	
	for(i = 0; i <= 200; i++){
		printf("%d ", i * 2);
	}
	
	
}