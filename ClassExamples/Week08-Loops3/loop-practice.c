/*
	Name: Paul Talaga
	Date: March 6, 2018
	Desc: For loop practice solution.
*/
#include <stdio.h>

int main(){
	printf("Enter your choice.\n"); // This really needs a menu!
	int choice = 0;
	scanf("%d", &choice);
	
	if(choice == 1){ // Evens
		int low = 0;
		int high = 0;
		scanf("%d %d", &low, &high);
		if(low > high){
			int temp = high;
			high = low;
			low = temp;
		} 
		/*		// Below are 3 different solutions
		if(low % 2 == 1){
			low++;
		}
		for(; low <= high; low = low + 2){
			printf("%d ", low);
		}
		*/
		/*
		for(; low <= high; low++){
			if(low % 2 == 0){
				printf("%d ", low);
			}
		}
		*/
		for(; low <= high; low+= 2){
			if(low % 2 == 1){
				low++;
			}
			printf("%d ", low);
		}
	}else if(choice == 2){ // odds
		int low = 0;
		int high = 0;
		scanf("%d %d", &low, &high);
		if(low > high){
			int temp = high;
			high = low;
			low = temp;
		}
		for(; low <= high; low+= 2){
			if(low % 2 == 0){
				low++;
			}
			printf("%d ", low);
		}
	}else if(choice == 3){ // is prime?
		int number = 0;
		scanf("%d", &number);
		int i = 1;
		int divisors = 0;
		for(i = 2; i < number/2; i++){
			if(number % i == 0){
				//printf("%d divides %d\n", i, number);
				divisors++;
			}
		}
		if(divisors == 0){
			printf("%d is prime!\n", number);
		}else{
			printf("%d is NOT prime.\n", number);
		}
	}else if(choice == 4){ // rectangle w/ left and right columns
		int width = 0;
		int height = 0;
		scanf("%d %d", &width, &height);
		int x = 0;
		int y = 0;
		for(y = 0; y < height; y++){
			for(x = 0; x < width; x++){
				if(x == 0 || x == width - 1){
					printf("|");
				}else{
					printf("*");
				}
			}
			printf("\n");
		}
	}else if(choice == 5){ // rectangle w/ top, bottom, left, right, and corners
		int width = 0;
		int height = 0;
		scanf("%d %d", &width, &height);
		int x = 0;
		int y = 0;
		for(y = 0; y < height; y++){
			for(x = 0; x < width; x++){
				if( (y == 0 && x == 0) ||  // upper left
					(y == 0 && x == width - 1) || // upper right
					(y == height - 1 && x == 0) || // lower left
					(y == height - 1 && x == width - 1) ){ // lower right
					printf("+");
				}else if(y == 0 || y == height - 1){ // top bottom
					printf("-");
				}else if(x == 0 || x == width - 1){ // left right
					printf("|");
				}else{
					printf("*");
				}
			}
			printf("\n");
		}
	}else if(choice == 6){ // mult table
		int width = 0;
		int height = 0;
		scanf("%d %d", &width, &height);
		int x = 0;
		int y = 0;
		for(y = 1; y <= height; y++){
			for(x = 1; x <= width; x++){
				printf("%3d ", x * y);
			}
			printf("\n");
		}
	}
	
}