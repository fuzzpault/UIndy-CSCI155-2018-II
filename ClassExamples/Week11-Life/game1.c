/*
	Name: Paul Talaga
	Date: March 29, 2018
	Desc: One dimensional Conway's game of life demo.
*/
#include <stdio.h>
#define SIZE 80

int main(){
	
	int board[SIZE] = {};
	int board_temp[SIZE] = {};
	/*board[10] = 1;
	board[11] = 1;
	board[14] = 1;
	*/
	int i = 0;
	for(i = 0; i < SIZE; i++){
		board[i] = rand() % 10 == 0;
	}
	
	
	int time = 0;
	
	while(time < 200){
		int num_alive = 0;
		for(i = 0; i < SIZE; i++){
			if(board[i]){
				printf("X");
				num_alive++;
			}else{
				printf(" ");
			}
		}
		printf(" %d\n", num_alive);
		time++;
		// Do the rules of life
		for(i = 1; i < SIZE - 1; i++){
			if(board[i-1] == 0 && board[i+1] == 0){ // underpopulation
				board_temp[i] = 0;
			}else if(board[i-1] + board[i+1] == 1){ // Only 1 neighbor
				board_temp[i] = 1;
			}else{ // overpopulation
				board_temp[i] = 0;
			}
		}
		// copy temp into board
		for(i = 0; i < SIZE; i++){
			board[i] = board_temp[i];
		}
	}
}