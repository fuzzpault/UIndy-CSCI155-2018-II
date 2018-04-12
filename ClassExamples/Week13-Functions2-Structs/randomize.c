#include <stdio.h>

void print(int* array, int length){
	int i = 0;
	for(i = 0; i < length; i++){
		printf("%d: %d\n", i, array[i]);
	}
}

void randomize(int* array, int length){
	int mess_up_times = 0;
	for(mess_up_times = 0; mess_up_times < length * 2; mess_up_times++){
		int n1 = rand() % length;
		int n2 = rand() % length;
		int temp = array[n1];
		array[n1] = array[n2];
		array[n2] = temp;
	}
}

void sort(int* array, int length){
	int checks = 0;
	int num_bubbles = 0;
	for(num_bubbles = 0; num_bubbles < length; num_bubbles++){
		int i = 0;
		int did_swap = 0;
		for(i = 0; i < length - 1 - num_bubbles; i++){
			checks++;
			if(array[i] > array[i + 1]){
				int temp = array[i];
				array[i] = array[i+1];
				array[i+1] = temp;
				did_swap = 1;
			}
		}
		if(!did_swap){
			printf("Go home early!\n");
			break;
		}
	}
	printf("Checks: %d\n", checks);
}

int main(){
	//srand(time(0));
	int a[10] = {1,2,3,4,5,6,7,8,9,10};
	
	print(a, 10);
	randomize(a, 10);
	printf("\n");
	print(a, 10);
	
	sort(a, 10);
	printf("\n");
	print(a, 10);
}