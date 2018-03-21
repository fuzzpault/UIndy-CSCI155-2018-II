/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Array max, min, average, and reversing.
*/
#include <stdio.h>

int main(){
	
	//int numbers[10] = {-1130, 800, 630, 600, 50, 2, 1, 56, 9, 10};
	int numbers[10] = {5,5,5};


	int i = 0;
	printf("[");
	for(i = 0; i < 10; i++){
		printf("%d, ", numbers[i]);
	}
	printf("]\n");
	
	int max_so_far = numbers[0];;
	for(i = 0; i < 10; i++){
		if(max_so_far < numbers[i]){
			max_so_far = numbers[i];
		}
	}
	printf("Max is %d\n", max_so_far);
	
	int min_so_far = numbers[0];
	for(i = 1; i < 10; i++){
		if(min_so_far > numbers[i]){
			min_so_far = numbers[i];
		}
	}
	printf("Min is %d\n", min_so_far);
	
	int sum_so_far = numbers[0];
	for(i = 1; i < 10; i++){
		sum_so_far = sum_so_far + numbers[i];
	}
	printf("Sum is %d\n", sum_so_far);
	
	printf("Average is: %f\n", (float)sum_so_far / 10);
	
	for(i = 0; i < 10/2; i++){
		int temp = numbers[i];
		numbers[i] = numbers[10 - i - 1];
		numbers[10 - i - 1] = temp;
	}
	
	printf("[");
	for(i = 0; i < 10; i++){
		printf("%d, ", numbers[i]);
	}
	printf("]\n");
	
	return 0;
}