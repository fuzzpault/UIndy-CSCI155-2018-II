/*
	Name: Paul Talaga
	Date: Mar 20, 2018
	Desc: Bad number analysis
*/

#include <stdio.h>
#define MAX_SIZE 50

int main(){
	int choice = 324;
	
	int values[MAX_SIZE];	
	int current_size = 0;  
	int i = 0;
	
	while(choice != 0){
		printf("\nWhat do you want to do?\n");
		printf("0. Exit\n");
		printf("1. Enter values\n");
		printf("2. IsSorted?\n");
		printf("3. Print List\n");
		
		scanf("%d", &choice);
		while(choice < 0 || choice > 3){
			printf("Enter a valid choice!\n");
			scanf("%d", &choice);
		}
		
		if(choice == 1){ // Enter values
			printf("Enter up to %d values, or -99 to stop.", MAX_SIZE);
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
		}else if(choice == 2){  // IsSorted
			int isSorted = 1;
			for(i = 0; i < current_size - 1; i++){
				if(values[i] > values[i + 1]){
					isSorted = 0;
				}
			}
			if(isSorted){
				printf("The numbers are sorted!\n");
			}else{
				printf("The numbers are NOT sorted!\n");
			}
		}else if(choice == 3){  // Print
			for(i = 0; i < current_size; i++){
				printf("%d ", values[i]);
			}
			printf("\n");
		}
	}
	return 0;
}