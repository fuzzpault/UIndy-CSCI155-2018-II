/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: What clothing should you wear based on the temperature?
*/
#include <stdio.h>

int main(){
	float temp = 0.0;
	printf("What is the temperature outside?\n");
	scanf("%f", &temp);
	
	printf("You should probably wear ");
	
	if(temp < 20.0){
		printf("hat, gloves, and a jacket.\n");
	}else if(temp < 50){
		printf(" a regular jacket.\n");
	}else if(temp < 70.0){
		printf(" a light jacket.\n");
	}else if(temp < 100.0){
		printf("shorts and t-shirt.\n");
	}else{
		printf("... huh? Stay inside or go to the pool.");
	}
	
}