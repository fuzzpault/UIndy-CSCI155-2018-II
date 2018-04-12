#include <stdio.h>

void print(int* array, int length){
	int i = 0;
	for(i = 0; i < length; i++){
		printf("%d: %d\n", i, array[i]);
	}
}

void randomize(int* array, int length){
	int i = 0;
	for(i = 0; i < length * 2; i++){
		int from = rand() % length;
		int to = rand() % length;
		int temp = array[from];
		array[from] = array[to];
		array[to] = temp;
	}
}

int main(){
	srand(time(0));
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	print(a, 10);
	randomize(a, 10);
	print(a, 10);
}