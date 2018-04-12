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

void bubble(int* f, int length){
	int bub_num = 0;
	for(bub_num = 0; bub_num < length; bub_num++){
		int i = 0;
		for(i = 0; i < length - 1 ; i++){
			if( f[i]  > f[i+1] ){ // wrong order
				int temp = f[i];
				f[i] = f[i+1];
				f[i+1] = temp;
			}
		}
	}
}

int main(){
	srand(time(0));
	int a[10] = {1,42,3,4,5,29,7,8,57,1};
	
	print(a, 10);
	printf("\n");
	randomize(a, 10);
	print(a, 10);
	printf("\n");
	bubble(a, 10);
	print(a, 10);
	printf("\n");
}