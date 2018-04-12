/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: The better way to send 2d arrays; don't! Treat them like 1d's
	      and use index math to get into the correct spot.
*/
#include <stdio.h>

void printArray(int* array, int height, int width);

int main(){
	srand(time(0));
	int a[10 * 10] = {};
	int kyla[20 * 20] = {};
	
	int y = 0;
	int x = 0;
	for(y = 0; y < 10; y++){
		for(x = 0; x < 10; x++){
			a[x + 10 * y] = rand() % 200 + 1;
		}
	}
	
	for(y = 0; y < 20; y++){
		for(x = 0; x < 20; x++){
			kyla[x + 20 * y] = rand() % 3;
		}
	}
	
	printArray(a, 10, 10);
	
	printArray(kyla, 20, 20);
	
}

void printArray(int* array, int height, int width){
	int y = 0;
	int x = 0;
	for(y = 0; y < height; y++){
		for(x = 0; x < width; x++){
				// Based on the width of the 2d array, this calculates the index
				// into a 1d array.
			printf("%4.0d ", array[x + width * y]);
		}
		printf("\n");
	}
}