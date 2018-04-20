/*
	Name: Paul Talaga
	Date: April 19, 2018
	Desc: Pointer practice for HW
*/
#include <stdio.h>

main(){
	
	// Part 1
	// Draw memory.
	
	int apple = 2;
	int banana = 56;
	int clementine[] = {1,2,3,4,5,6,7,8,9,10};
	int* date = NULL;
	int* elderberry = NULL;
	int* grape[3] = {};
	
	date = &apple;
	clementine[5] += banana;
	banana = *date;
	elderberry = clementine + 3;
	grape[1] = date;
	date = &banana;
	*elderberry = apple;
	clementine[2] = *(clementine);
	*(grape) = elderberry;
	*(grape + clementine[3]) = &clementine[8];
	
	// Print everything out to the screen
	
	printf("apple: %d \n", apple);
	printf("banan: %d \n", banana);
	int i = 0; 
	for(i = 0; i < 10; i++){
		printf("%d ", clementine[i]);
	}
	printf("\n*date: %d \n", *date);
	printf("*elderberry: %d \n", *elderberry);
	for(i = 0; i < 3; i++){
		printf("%d ", *grape[i]);
	}
	
	return;
}