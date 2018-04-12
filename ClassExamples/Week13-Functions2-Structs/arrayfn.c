/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: How an array can be sent to a function.
*/
#include <stdio.h>

void print(int* array, int length){
	int i = 0;
	for(i = 0; i < length; i++){
		printf("%d: %d\n", i, array[i]);
	}
}

int main(){
	int a[] = {6, 19, 47, 51, 22};
	int b[] = {4,8,7,5,3,6,8,9,10,4};
	
	print(a, 5);
	print(b, 10);
}