/*
	Name: Paul Talaga
	Date: Mar 20, 2018
	Desc: Solution to HW08 - Number Analysis
*/

#include <stdio.h>
#define MAX_SIZE 20

int main(){
	srand(time(0));
	int choice = 1;
	
	int values[MAX_SIZE];
	int current_size = 0;
	int i = 0;
	
	while(choice != 5){
		printf("\nWhat do you want to do?\n");
		printf("1. All 0s\n");
		printf("2. Given value\n");
		printf("3. Increasing\n");
		printf("4. Random 0-10\n");
		printf("5. Exit\n");
		printf("6. Random w/bounds\n");
		printf("7. Change value\n");
		printf("8. Replace\n");
		printf("9. Negate\n");
		printf("10. Search\n");
		
		scanf("%d", &choice);
		while(choice < 1 || choice > 10){
			printf("Enter a valid choice!\n");
			scanf("%d", &choice);
		}
		
		if(choice == 1){ // 0s
			for(i = 0; i < MAX_SIZE; i++){
				values[i] = 0;
			} 
		
		}else if(choice == 2){  // given value
			printf("What value do you want?\n");
			int number;
			scanf("%d", &number);
			for(i = 0; i < MAX_SIZE; i++){
				values[i] = number;
			} 
		}else if(choice == 3){  // Increasing
			printf("What value do you want?\n");
			int number;
			scanf("%d", &number);
			for(i = 0; i < MAX_SIZE; i++){
				values[i] = number;
				number++;
			} 
		}else if(choice == 4){  // Random 0-10
			for(i = 0; i < MAX_SIZE; i++){
				values[i] = rand() % 11;
			}
		}else if(choice == 6){  // Random bounds
			printf("What lower value do you want?\n");
			int low;
			scanf("%d", &low);
			printf("What high value do you want?\n");
			int high;
			scanf("%d", &high);
			if(low > high){
				int temp = low;
				low = high;
				high = temp;
			}
			for(i = 0; i < MAX_SIZE; i++){
				values[i] = rand() % (high-low+1) + low;
			}
		}else if(choice == 7){  // Change value
			printf("What index to change?\n");
			int i;
			scanf("%d", &i);
			while(i < 0 || i >= MAX_SIZE){
				printf("That is not a valid number from 0 to %d\n", MAX_SIZE-1);
				scanf("%d", &i);
			}
			printf("What value to put in index %d?\n", i);
			int value;
			scanf("%d", &value);
			values[i] = value;
		}else if(choice == 8){  // Search replace
			printf("What value to search for?\n");
			int search;
			scanf("%d", &search);
			printf("What value to put in it's place?");
			int value;
			scanf("%d", &value);
			for(i = 0; i < MAX_SIZE; i++){
				if(values[i] == search){  // Don't print a , if the last one
					values[i] = value;
				}
			}
		}else if(choice == 9){  // Negate
			for(i = 0; i < MAX_SIZE; i++){
				values[i] = values[i] * -1;
			}
		}else if(choice == 10){  // Search
			printf("What value to search for?\n");
			int search;
			scanf("%d", &search);
			int count = 0;
			for(i = 0; i < MAX_SIZE; i++){
				if(values[i] == search){
					count++;
				}
			}
			printf("There were %d occurances of %d\n", count, search);
		}
		// Print the array
		printf("[");
		for(i = 0; i < MAX_SIZE; i++){
			printf("%d", values[i]);
			if(i != MAX_SIZE - 1){  // Don't print a , if the last one
				printf(", ");
			}
		}
		printf("]\n");
	}
	return 0;
}