/*
	Name: Paul Talaga
	Date: Mar 20, 2018
	Desc: Solution to HW08 - Number Analysis
*/

#include <stdio.h>
#define MAX_SIZE 50

int main(){
	int choice = 1;
	
	int values[MAX_SIZE];	// Declaring the array outside the while loop
							// allows the array to exist over multiple
							// operations.
	int current_size = 0;   // Keep track of how many numbers they entered.
	int i = 0;
	
	while(choice != 9){
		printf("\nWhat do you want to do?\n");
		printf("1. Enter values\n");
		printf("2. Count - how many numbers entered?\n");
		printf("3. Sum of all numbers\n");
		printf("4. Minimum of all numbers\n");
		printf("5. Mean of all numbers\n");
		printf("6. Print the list of numbers.\n");
		printf("7. Flip - reverse the order of the numbers.\n");
		printf("8. Add - Add something to all.\n");
		printf("9. Exit\n");
		
		scanf("%d", &choice);
		while(choice < 1 || choice > 9){
			printf("Enter a valid choice!\n");
			scanf("%d", &choice);
		}
		
		if(choice == 1){ // Enter values
			current_size = 0; // Reset - start from beginning
			for(i = 0; i < MAX_SIZE; i++){
				int temp = 0;
				scanf("%d", &temp );
				if(temp == -99){
					current_size = i;
					break;
				}
				values[i] = temp;
			} 
		
		}else if(choice == 2){  // Count
			printf("There are %d numbers stored.\n", current_size);
		}else if(choice == 3){  // Sum
			int sum = 0;
			for(i = 0; i < current_size; i++){
				sum += values[i];
			}
			printf("The sum is: %d\n", sum);
		}else if(choice == 4){  // Minimum
			int min = values[0];
			for(i = 0; i < current_size; i++){
				if(values[i] < min){
					min = values[i];
				}
			}
			printf("The min is: %d\n", min);
		}else if(choice == 5){  // Mean
			int sum = 0;
			for(i = 0; i < current_size; i++){
				sum += values[i];
			}
			printf("The average is: %f\n", (float)sum/current_size);
		}else if(choice == 6){  // Print list
			printf("[");
			for(i = 0; i < current_size; i++){
				printf("%d", values[i]);
				if(i != current_size - 1){  // Don't print a , if the last one
					printf(", ");
				}
			}
			printf("]\n");
		}else if(choice == 7){  // Flip list
			for(i = 0; i < current_size/2; i++){
				int temp = values[i];
				values[i] = values[current_size-i-1];
				values[current_size-i-1] = temp;
			}
		}else if(choice == 8){  // Add to list
			printf("What number to add?\n");
			int number = 0;
			scanf("%d", &number);
			for(i = 0; i < current_size; i++){
				values[i] += number;
			}
			printf("]\n");
		}
	}
	return 0;
}