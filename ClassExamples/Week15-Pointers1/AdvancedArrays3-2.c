/*
	Name: Paul Talaga
	Date: Mar 20, 2018
	Desc: Bad number analysis
*/

#include <stdio.h>
#define MAX_SIZE 100

int main(){
	int choice = 324;
	
	int values[MAX_SIZE];	
	int current_size = 0;  
	int i = 0;
	
	while(choice != 0){
		printf("\nWhat do you want to do?\n");
		printf("0. Exit\n");
		printf("1. Enter values\n");
		printf("2. Print\n");
		printf("3. rotate\n");
		printf("4. isOdd\n");
		printf("5. multiply\n");
		
		scanf("%d", &choice);
		while(choice < 0 || choice > 5){
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
		}else if(choice == 2){  // Print
			for(i = 0; i < current_size; i++){
				printf("%d ", values[i]);
			}
			printf("\n");
		}else if(choice == 3){  // Rotate left
			int temp = values[0];
			for(i = 0; i < current_size - 1; i++){
				values[i] = values[i+1];
			}
			values[current_size - 1] = temp;
		}else if(choice == 4){  // isOdd
			for(i = 0; i < current_size; i++){
				//values[i] = values[i] % 2; // sneaky way
				if(values[i] % 2 == 0){
					values[i] = 0;
				}else{
					values[i] = 1;
				}
			}
		}else if(choice == 5){ // multiply
			printf("What is Jake's favorite number?");
			int number;
			scanf("%d", &number);
			for(i = 0; i < current_size; i++){
				values[i] = values[i] * number;
			}
		}
	}
	return 0;
}