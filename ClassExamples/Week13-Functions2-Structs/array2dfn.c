/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: A bad way to send 2d arrays to a function because the # columns
		  must be hard-set.
*/
#include <stdio.h>

void print(int* array, int length){
	int i = 0;
	for(i = 0; i < length; i++){
		printf("%d: %d\n", i, array[i]);
	}
}

void fillIn2D(int array[][10], int height, int width){
	int y = 0;
	int x = 0;
	for(y = 0; y < height; y++){
		for(x = 0; x < width; x++){
			if(rand() % 3 == 0){
				array[y][x] = 42;
			}else{
				array[y][x] = 6;
			}
		}
	}
}

int main(){
	srand(time(0));
	int a[10][10] = {};
	int b[20][20] = {};
	
	fillIn2D(a, 10, 10);
	fillIn2D(b, 20, 20);
	
	int y = 0;
	int x = 0;
	
	
	for(y = 0; y < 10; y++){
		for(x = 0; x < 10; x++){
			printf("%3.0d ", a[y][x]);
		}
		printf("\n");
	}
	
	
}