#include <stdio.h>
#define SIZE 20000000

int main(){
	int big[SIZE] = {};
	// 1 int is 4 bytes
	printf("Storing %f MB \n", (float)SIZE * 4 / 1024 / 1024);
	return;
}