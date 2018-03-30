/*
	Name: Paul Talaga
	Date: March 29, 2018
	Desc: Two dimensional Conway's game of life demo.
*/
#include <stdio.h>
#include<time.h>
#define SIZE 80

void delay(int milli_seconds){    // Stroing start time
    clock_t start_time = clock();
    // looping till required time is not acheived
    while (clock() < start_time + milli_seconds * CLOCKS_PER_SEC / 1000)
        ;
}

int main(){
	
	int board[SIZE][SIZE] = {};
	int board_temp[SIZE][SIZE] = {};
	/*board[10] = 1;
	board[11] = 1;
	board[14] = 1;
	*/
	int y = 0;
	int x = 0;
	for(y = 0; y < SIZE; y++){
		for(x = 0; x < SIZE; x++){
			board[y][x] = rand() % 10 == 0;
		}
	}
	
	
	int time = 0;
	
	while(time < 100){
		int num_alive = 0;
		for(y = 0; y < SIZE; y++){
			for(x = 0; x < SIZE; x++){
				if(board[y][x]){
					printf("X");
					num_alive++;
				}else{
					printf(" ");
				}
			}
			printf("\n");
		}
		printf("\n");

		time++;
		// Do the rules of life
		
		for(y = 1; y < SIZE -1; y++){
			for(x = 1; x < SIZE -1; x++){
				int live_neighbors = board[y-1][x-1] +
									 board[y-1][x] +
									 board[y-1][x+1] +
									 board[y+1][x-1] +
									 board[y+1][x] +
									 board[y+1][x+1] +
									 board[y][x-1] +
									 board[y][x+1];
				if(live_neighbors <  2){ // underpopulation
					board_temp[y][x] = 0;
				}else if(live_neighbors == 2 ){ // 33
					board_temp[y][x] = board[y][x];
				}else if(live_neighbors == 3 ){ // 2 or 3
					board_temp[y][x] = 1;
				}else{ // overpopulation
					board_temp[y][x] = 0;
				}
			}
		}
		// copy temp into board
		for(y = 0; y < SIZE; y++){
			for(x = 0; x < SIZE; x++){
				board[y][x] = board_temp[y][x];
			}
		}
		
		delay(80);
	}
}