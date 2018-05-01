/* Name: Paul Talga
   Date: May 1, 2018
   Desc: Program to manage donuts.
*/
#include <stdio.h>

#define SIZE 100 // Maximum number of donuts to allow

typedef struct donut_t_struct{
	char name[50];
	float diameter;
	int sprinkles;
} donut_t;

donut_t getNewDonut(){
	donut_t ret;
	printf("What is the one-word name of your donut?\n");
	scanf("%s", ret.name);
	printf("What is the diameter of the donut in inches?");
	scanf("%f", &ret.diameter);
	printf("Does the donut have sprinkles? 0/1");
	scanf("%d", &ret.sprinkles);
	return ret;
}

void printDonut(donut_t d){
	printf("%s diam: %f ", d.name, d.diameter);
	if(d.sprinkles){
		printf(" w/Sprinkles!");
	}
	printf("\n");
}

void printAll(donut_t* d, int length){
	int i = 0;
	for(i = 0; i < length; i++){
		printDonut(d[i]);
	}
}

int main(){
	donut_t donuts[SIZE];
	int filled = 0;
	int choice = 1;
	printf("0. Exit\n");
	printf("1. Add donut.\n");
	printf("2. Print all donuts\n");
	scanf("%d", &choice);
	while(choice != 0){
		if(choice == 1){
			donuts[filled] = getNewDonut();
			filled++;
		}else if(choice == 2){
			printAll(donuts, filled);
		}
		
		printf("\n0. Exit\n");
		printf("1. Add donut.\n");
		printf("2. Print all donuts\n");
		scanf("%d", &choice);
	}
}
                 