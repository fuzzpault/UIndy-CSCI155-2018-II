/*
	Name: Paul Talaga
	Date: April 17, 2018
	Desc: Solution to Exam2 problem
*/
#include <stdio.h>
#define MAX_SIZE 100

int main(){
	int choice = 1;
	
	int values[MAX_SIZE];	
	int current_size = 0;  
	int i = 0;
	
	while(choice != 0){
		printf("\nWhat do you want to do?\n");
		printf("0. Exit\n");
		printf("1. Enter values\n");
		printf("2. Print\n");
		printf("3. Rotate\n");
		printf("4. isEven\n");
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
		}else if(choice == 2){ // print
			for(i = 0; i < current_size; i++){
				printf("%d ", values[i]);
			}
		}else if(choice == 3){ // rotate
			int temp = values[current_size - 1];
			for(i = current_size - 1; i >= 1; i--){
				values[i] = values[i-1];
			}
			values[0] = temp;
		}else if(choice == 4){ // isEven
			for(i = 0; i < current_size; i++){
				if(values[i] % 2 == 0){
					values[i] = 1;
				}else{
					values[i] = 0;
				}
			}
		}else if(choice == 5){ // multiply
			printf("Enter your favorite number.");
			int number = 0;
			scanf("%d", &number);
			for(i = 0; i < current_size; i++){
				values[i] = values[i] * number;
			}
		}
	}
	
	return 0;
}