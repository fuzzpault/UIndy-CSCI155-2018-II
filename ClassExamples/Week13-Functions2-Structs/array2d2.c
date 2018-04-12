/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: Demo of sending a 2d array with variable size, which doesn't work!
*/

#include <stdio.h>

void printArray(int array[][], int height, int width){ // Ug, # cols must be provided!
	int y = 0;
	int x = 0;
	for(y = 0; y < height; y++){
		for(x = 0; x < width; x++){
			printf("%4.0d ", array[y][x]);
		}
		printf("\n");
	}
}

int main(){
	srand(time(0));
	int a[10][10] = {};
	int kyla[20][20] = {};
	
	int y = 0;
	int x = 0;
	for(y = 0; y < 10; y++){
		for(x = 0; x < 10; x++){
			a[y][x] = rand() % 200 + 1;
		}
	}
	
	for(y = 0; y < 20; y++){
		for(x = 0; x < 20; x++){
			kyla[y][x] = rand() % 3;
		}
	}
	
	printArray(a, 10, 10);
	
	printArray(kyla, 20, 20);
	
}