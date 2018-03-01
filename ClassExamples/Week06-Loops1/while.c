/*
	Name: Paul Talaga
	Date: Feb 20, 2018
	Desc: Solution to HW05 - While loops
*/
#include <stdio.h>

int main(){
	printf("1. Horizontal Line\n");
	printf("2. SOS\n");
	printf("3. Range\n");
	printf("4. Mod\n");
	printf("What task would you like to do?");
	
	int selection = 0;
	scanf("%d", &selection);
	
	if(selection == 1){
		printf("How wide?\n");
		scanf("%d", &selection);
		while(selection < 0){
			printf("Negative width doesn't make sense! Try again:");
			scanf("%d", &selection);
		}
		int width = 0;
		while(width < selection){
			printf("*");
			width++;
		}
		printf("\n");
	}else if(selection == 2){
		printf("How wide?\n");
		scanf("%d", &selection);
		while(selection < 0){
			printf("Negative width doesn't make sense! Try again:");
			scanf("%d", &selection);
		}
		int width = 0;
		while(width < selection){
			printf("...---... ");
			width++;
		}
		printf("\n");
	}else if(selection == 3){
		printf("Enter two values:\n");
		int low = 0;
		int high = 0;
		scanf("%d", &low);
		scanf("%d", &high);
		// Flip if wrong order
		if(low > high){
			int temp = low;
			low = high;
			high = temp;
		}
		while(low <= high){
			printf("%d ", low);
			low++;
		}
		printf("\n");
	}else if(selection == 4){
		printf("Enter two values for x mod y:\n");
		int x = 0;
		int y = 0;
		scanf("%d", &x);
		scanf("%d", &y);
		
		while(x >= y){
			printf("%d mod %d =\n", x, y);
			x = x - y;
		}
		printf("%d\n", x);
	}
	
	return 0;
}