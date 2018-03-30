/*
	Name: Paul Talaga
	Date: March 29, 2018
	Desc: Demo of a 2d array.
*/
#include <stdio.h>

int main(){
	int board[10][10] = {};
	
	board[5][5] = 99;
	
	int x = 0;
	int y = 0;
	for(y = 0; y < 10; y++){
		for(x = 0; x < 10; x++){
			printf("%02d ", board[y][x]);
		}
		printf("\n");
	}
}