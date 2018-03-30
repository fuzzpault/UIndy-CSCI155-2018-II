/*
	Name: Paul Talaga
	Date: March 29, 2018
	Desc: 'Rain down numbers'
		  Uses 2-dimensional arrays to do a rain simulation.
*/
#include <stdio.h>
#include <time.h>
#define XSIZE 120
#define YSIZE 40

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
	for(y = 0; y < 3; y++){
		for(x = 0; x < XSIZE; x++){
			world[y][x] = rand() % 10;
			//world_temp[y][x] = rand() % 10 == 0;
		}
	}
	
	int generations = 0;
	
	while(generations < 1000){
		
		int count = 0;
		for(y = 0; y < YSIZE; y++){
			for(x = 0; x < XSIZE; x++){
				if( world[y][x] <= 0){
					printf(" ");
				}else{
					printf("%d", world[y][x]);
				}
			}
			printf("\n");
		}
		printf("\n");
		
		// Fill in the top row
    	for(y = 0; y < 1; y++){
    		for(x = 0; x < XSIZE; x++){
    			world[y][x] = rand() % 10;
    		}
    	}
		// Move all the numbers down
		for(y = 1; y < YSIZE-1; y++){
			for(x = 1; x < XSIZE-1; x++){
				if(rand() % 2 == 0){
					world_temp[y][x] = world[y-1][x] - 1;
				}else{
					world_temp[y][x] = world[y-1][x];
				}
			}
		}
		
		// copy temp to real
		for(y = 0; y < YSIZE; y++){
			for(x = 0; x < XSIZE; x++){
				world[y][x] = world_temp[y][x];
			}
		}
		
		delay(20);
		generations++;
	}
}