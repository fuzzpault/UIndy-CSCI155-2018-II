#include <stdio.h>
#include <stdlib.h>
#define SIZE 800000000

int main(){
	int* x = (int*)malloc(sizeof(int) * SIZE);
	*x = 5;
	printf("*x %d \n", *x);
	// 1 int is 4 bytes
	printf("Storing %f MB \n", (float)SIZE * 4 / 1024 / 1024);
	int i = 0;
	scanf("%d", &i);
	free(x);
	return;
}