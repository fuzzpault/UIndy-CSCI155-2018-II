/*
	Name: Paul Talaga
	Date: March 29, 2018
	Desc: One dimensional Conway's game of life demo.
*/
#include <stdio.h>

int main(){
	srand(time(0));
	int world[80] = {};// 0 as dead, 1 as alive
	int world_temp[80] = {};// 0 as dead, 1 as alive

	int i = 0;
	for(i = 0; i < 80; i++){
		world[i] = rand() % 10 == 0; // Fill with 10% alive cells.
	}
	
	int generations = 0;
	
	while(generations < 100){
		
		int count = 0;
		for(i = 0; i < 80; i++){
			if( world[i] == 1){
				count++;
				printf("X");
			}else{
				printf(" ");
			}
		}
		printf(" %d\n", count);
		// Do the rules!
		for(i = 1; i < 80 - 1; i++){
			if(world[i-1] + world[i+1] == 0){
				world_temp[i] = 0;
			}else if(world[i-1] + world[i+1] == 1){
				world_temp[i] = 1;
			}else if(world[i-1] + world[i+1] == 2){
				world_temp[i] = 0;
			}
		}
		// copy temp to real
		for(i = 0; i < 80; i++){
			world[i] = world_temp[i];
		}
		
		generations++;
	}
}