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
		printf(" w/Sprinkles!\n");
	}
}

int main(){
	donut_t donuts[SIZE];
	int filled = 1;
	donuts[0] = getNewDonut();
	printDonut(donuts[0]);
}
                 