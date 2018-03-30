/*
	Name: Paul Talaga
	Date: March 29, 2018
	Desc: Command-line argument demonstration.
*/
#include <stdio.h>

int main(int argc, char* argv[] ){
	printf("Argc: %d\n", argc);
	int i = 0;
	for(i = 0; i < argc; i++){
		printf("argv[%d]: %s \n",i, argv[i]);
	}
	printf("%c \n", argv[0][1]);
	
	
	
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