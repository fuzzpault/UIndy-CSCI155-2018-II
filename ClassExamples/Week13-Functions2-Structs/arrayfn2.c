/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: How to print a 1D array; send the length!
*/
#include <stdio.h>

void printArray(int array[], int length){
	int i = 0; 
	for(i = 0; i < length; i++){
		printf("%d: %d\n", i, array[i]);
	}
}

int main(){
	int a[] = {7, 12, 3, 51, 232};
	int b[] = {5,8,4,2,6,9,4,6,7,10};
	
	printArray(a, 5);
	printArray(b, 10);
}