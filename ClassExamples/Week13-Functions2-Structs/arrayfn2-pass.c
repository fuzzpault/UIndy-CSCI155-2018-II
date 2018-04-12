/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: Sending arrays to functions.
*/
#include <stdio.h>

void printArray(int array[], int length){
	int i = 0; 
	for(i = 0; i < length; i++){
		printf("%d: %d\n", i, array[i]);
		//array[i]++;
	}
	
}

void addArray(int* array, int length, int value){
	int i = 0; 
	for(i = 0; i < length; i++){
		array[i] += value;
	}
}

void printNumber(int a){
	printf("%d", a);
	a++;
}

int main(){
	int a[] = {7, 12, 3, 51, 232};
	int b[] = {5,8,4,2,6,9,4,6,7,10};
	
	printArray(a, 5);
	addArray(a, 5, 100);
	printArray(a, 5);
	printArray(a, 5);
	
	/*int n = 0;
	printNumber(n);
	printNumber(n);
	printNumber(n); */

}