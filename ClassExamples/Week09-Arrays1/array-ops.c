/*
	Name: Paul Talaga
	Date: March 20, 2018
	Desc: Various opperations on arrays.
*/
#include <stdio.h>
#define SIZE 10

int main(){
	int values[SIZE] = {-4, 9, 26, 42, 267, 955, 630, 1055, 7, 2};
	//int values[SIZE] = {1,2,3,4};
	
	int i = 0;
	printf("values: [");
	for(i = 0; i < SIZE; i++){
		printf("%d, ", values[i]);
	}
	printf("]\n");
	
	int min_so_far = values[0];
	for(i = 1; i < SIZE; i++){
		if(values[i] < min_so_far){
			min_so_far = values[i];
		}
	}
	printf("The minimum value is: %d.\n", min_so_far);
	
	int max_so_far = values[0];
	for(i = 1; i < SIZE; i++){
		if(values[i] > max_so_far){
			max_so_far = values[i];
		}
	}
	printf("The maximum value is: %d.\n", max_so_far);
	
	int sum = 0;
	for(i = 0; i < SIZE; i++){
		sum = sum + values[i];
	}
	printf("The sum of the numbers is: %d.\n", sum);
	
	printf("The average is: %f.\n", (float)sum / SIZE);
	
	/*int add_number = 0;
	printf("What number to add?\n");
	scanf("%d", &add_number);
	
	for(i = 0; i < SIZE; i++){
		values[i] = values[i] + add_number;
	} */
	
	
	printf("values: [");
	for(i = 0; i < SIZE; i++){
		printf("%d, ", values[i]);
	}
	printf("]\n");
	
	for(i = 0; i < SIZE/2; i++){
		int temp = values[i];
		values[i] = values[SIZE - i - 1];
		values[SIZE - i - 1] = temp;
	}
	
	printf("values: [");
	for(i = 0; i < SIZE; i++){
		printf("%d, ", values[i]);
	}
	printf("]\n");
	
	
	int num_evens = 0;
	for(i = 0; i < SIZE; i++){
		if(values[i] % 2 == 0){
			num_evens++;
		}
	}
	printf("There are %d even numbers in the list.\n", num_evens);
	
	
	
	

	return 0;	
}