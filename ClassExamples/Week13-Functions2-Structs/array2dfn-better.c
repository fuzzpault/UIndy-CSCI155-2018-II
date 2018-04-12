/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: The better way to send 2d arrays; don't! Treat them like 1d's
	      and use index math to get into the correct spot.
	      Demo of function prototypes.
*/
#include <stdio.h>

// Use a function prototype and implement them later.
void print(int* array, int length);
void fillIn2D(int array[], int height, int width, int init);
void print2D(int array[], int height, int width);

int main(){
	srand(time(0));
	int a[10 * 10] = {};
	int b[20 * 20] = {};
	
	fillIn2D(a, 10, 10, 8);
	fillIn2D(b, 20, 20, 99);
	
	print2D(a, 10, 10);
	print2D(b, 20, 20);
	
	return 0;
}

void print(int* array, int length){
	int i = 0;
	for(i = 0; i < length; i++){
		printf("%d: %d\n", i, array[i]);
	}
}

void fillIn2D(int array[], int height, int width, int init){
	int y = 0;
	int x = 0;
	for(y = 0; y < height; y++){
		for(x = 0; x < width; x++){
			array[y * width + x] = init;
		}
	}
}

void print2D2(int array[], int height, int width){
	int y = 0;
	int x = 0;
	for(y = 0; y < height; y++){
		for(x = 0; x < width; x++){
			printf("%3.0d ", array[y * width + x]);
		}
		printf("\n");
	}
}