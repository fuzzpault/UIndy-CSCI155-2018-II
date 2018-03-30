/*
	Name: Paul Talaga
	Date: March 29, 2018
	Desc: Two dimensional Conway's game of life demo.
*/
#include <stdio.h>
#include <time.h>
#define XSIZE 80
#define YSIZE 40

// A function to delay the display, so you get an animation.
void delay(int milli_seconds){    // Stroing start time
    clock_t start_time = clock();
    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds * CLOCKS_PER_SEC / 1000)
        ;
}

int main(){
	srand(time(0));
	int world[YSIZE][XSIZE] = {};// 0 as dead, 1 as alive
	int world_temp[YSIZE][XSIZE] = {};// 0 as dead, 1 as alive
	//world[11] = 1;
	//world[4] = 1;
	int y = 0;
	int x = 0;
	for(y = 0; y < YSIZE; y++){
		for(x = 0; x < XSIZE; x++){
			world[y][x] = rand() % 10 == 0;
			//world_temp[y][x] = rand() % 10 == 0;
		}
	}
	
	int generations = 0;
	
	while(generations < 100){
		
		int count = 0;
		for(y = 0; y < YSIZE; y++){
			for(x = 0; x < XSIZE; x++){
				if( world[y][x] == 1){
					printf("X");
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");
		// Do the rules!
		
		for(y = 1; y < YSIZE-1; y++){
			for(x = 1; x < XSIZE-1; x++){
				int num_neighbors = world[y-1][x-1] + 
									world[y-1][x] +
									world[y-1][x+1] +
									world[y][x-1] + 
									world[y][x+1] +
									world[y+1][x-1] +
									world[y+1][x] +
									world[y+1][x+1];
				if(num_neighbors < 2){
					world_temp[y][x] = 0;
				}else if(num_neighbors == 2){
					world_temp[y][x] = world[y][x];
				}else if(num_neighbors == 3){
					world_temp[y][x] = 1;
				}else{
					world_temp[y][x] = 0;
				}
			}
		}
		
		// copy temp to real
		for(y = 0; y < YSIZE; y++){
			for(x = 0; x < XSIZE; x++){
				world[y][x] = world_temp[y][x];
			}
		}
		
		delay(80);
		generations++;
	}
}