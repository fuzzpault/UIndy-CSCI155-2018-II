/*
	Name: Paul Talaga
	Date: March 6, 2018
	Desc: Shapes assignment
*/
#include <stdio.h>

int main(){
	
	srand(time(0));
	
	printf("1. Filled-in rectangle\n");
	printf("2. Rectangle frame\n");
	printf("3. Rectangle frame with alternating interior\n");
	printf("4. Square with alternating interior\n");
	printf("5. Rectangle frame with random inside\n");
	printf("6. Right triangle\n");
	printf("7. Pyramid\n");
	printf("8. Circle\n");
	printf("9. EC - Death Star\n");

	printf("Enter your choice.\n"); 
	int choice = 0;
	scanf("%d", &choice);
	while(choice < 1 || choice > 9){
		printf("Enter a value from 1 to 8!\n");
		scanf("%d", &choice);	
	}
	
	// Now do it!
	if(choice == 1){ // Filled rectangle
		int width = 0;
		int height = 0;
		printf("Height?\n");
		scanf("%d", &height);
		while(height < 0){
			printf("Height should be non-negative!  Re-enter!\n");
			scanf("%d", &height);	
		}
		printf("Width?\n");
		scanf("%d", &width);
		while(width < 0){
			printf("Width should be non-negative!  Re-enter!\n");
			scanf("%d", &width);	
		}
		int x = 0;
		int y = 0;
		for(y = 0; y < height; y++){
			for(x = 0; x < width; x++){
				printf("*");
			}
			printf("\n");
		}
	}else if(choice == 2){ // rectangle frame
		int width = 0;
		int height = 0;
		printf("Height?\n");
		scanf("%d", &height);
		while(height < 0){
			printf("Height should be non-negative!  Re-enter!\n");
			scanf("%d", &height);	
		}
		printf("Width?\n");
		scanf("%d", &width);
		while(width < 0){
			printf("Width should be non-negative!  Re-enter!\n");
			scanf("%d", &width);	
		}
		int x = 0;
		int y = 0;
		for(y = 0; y < height; y++){
			for(x = 0; x < width; x++){
				if(y == 0 || y == height - 1 || x == 0 || x == width - 1){ // border
					printf("*");
				}else{ // inside
					printf(" ");
				}
			}
			printf("\n");
		}
	}else if(choice == 3){ // rectangle frame with period and space inside
		int width = 0;
		int height = 0;
		printf("Height?\n");
		scanf("%d", &height);
		while(height < 0){
			printf("Height should be non-negative!  Re-enter!\n");
			scanf("%d", &height);	
		}
		printf("Width?\n");
		scanf("%d", &width);
		while(width < 0){
			printf("Width should be non-negative!  Re-enter!\n");
			scanf("%d", &width);	
		}
		int x = 0;
		int y = 0;
		for(y = 0; y < height; y++){
			for(x = 0; x < width; x++){
				if(y == 0 || y == height - 1 || x == 0 || x == width - 1){ // border
					printf("*");
				}else if(x % 2 == 0){
					printf(".");
				}else{ 
					printf(" ");
				}
			}
			printf("\n");
		}
	}else if(choice == 4){ // square frame with period and comma
		int height = 0;
		printf("Height?\n");
		scanf("%d", &height);
		while(height < 0){
			printf("Height should be non-negative!  Re-enter!\n");
			scanf("%d", &height);	
		}
		int x = 0;
		int y = 0;
		for(y = 0; y < height; y++){
			for(x = 0; x < height; x++){
				if(y == 0 || y == height - 1 || x == 0 || x == height - 1){ // border
					printf("*");
				}else if(x % 2 == 0){
					printf(".");
				}else{ 
					printf(",");
				}
			}
			printf("\n");
		}
	}else if(choice == 5){ // rectangle frame with random period
		int width = 0;
		int height = 0;
		printf("Height?\n");
		scanf("%d", &height);
		while(height < 0){
			printf("Height should be non-negative!  Re-enter!\n");
			scanf("%d", &height);	
		}
		printf("Width?\n");
		scanf("%d", &width);
		while(width < 0){
			printf("Width should be non-negative!  Re-enter!\n");
			scanf("%d", &width);	
		}
		int x = 0;
		int y = 0;
		for(y = 0; y < height; y++){
			for(x = 0; x < width; x++){
				if(y == 0 || y == height - 1 || x == 0 || x == width - 1){ // border
					printf("*");
				}else if(rand() % 4 == 0){
					printf(".");
				}else{ 
					printf(" ");
				}
			}
			printf("\n");
		}
	}else if(choice == 6){ // triangle
		int width = 0;
		printf("Width?\n");
		scanf("%d", &width);
		while(width < 0){
			printf("Width should be non-negative!  Re-enter!\n");
			scanf("%d", &width);	
		}
		int x = 0;
		int y = 0;
		for(y = 1; y <= width; y++){
			for(x = 1; x <= width; x++){
				if(x <= y){ // inside the triangle!
					printf("*");
				}else{ 
					printf(" ");
				}
			}
			printf("\n");
		}
	}else if(choice == 7){ // pyramid
		int width = 0;
		printf("Width?\n");
		scanf("%d", &width);
		while(width < 0){
			printf("Width should be non-negative!  Re-enter!\n");
			scanf("%d", &width);	
		}
		int x = 0;
		int y = 0;
		for(y = 1; y <= width/2; y++){
			for(x = 1; x <= width; x++){
				if(x > width/2 - y && x < width/2 + y){ // inside the triangle!
					printf("*");
				}else{ 
					printf(" ");
				}
			}
			printf("\n");
		}
	}else if(choice == 8){ // circle
		int radius = 0;
		printf("Radius?\n");
		scanf("%d", &radius);
		while(radius < 0){
			printf("Radius should be non-negative!  Re-enter!\n");
			scanf("%d", &radius);	
		}
		int x = 0;
		int y = 0;
		for(y = 0; y <= radius * 2; y++){
			for(x = 0; x <= radius * 2; x++){
				if((x - radius)*(x-radius) + (y - radius)*(y - radius) <= radius * radius){ // inside the circle
					printf("* ");
				}else{ 
					printf("  ");
				}
			}
			printf("\n");
		}
	}else if(choice == 9){ // death star
		int radius = 0;
		printf("Radius?\n");
		scanf("%d", &radius);
		while(radius < 0){
			printf("Radius should be non-negative!  Re-enter!\n");
			scanf("%d", &radius);	
		}
		int x = 0;
		int y = 0;
		for(y = 0; y <= radius * 2; y++){
			for(x = 0; x <= radius * 2; x++){
				if((x - radius)*(x-radius) + (y - radius)*(y - radius) <= radius * radius){ // inside the circle
					if((x - radius *1.4)*(x-radius*1.4) + (y - radius*0.6)*(y - radius*0.6) <= radius/4 * radius/4){ // inside the triangle!
						printf(". ");
					}else{
						printf("* ");
					}
				}else{ 
					printf("  ");
				}
			}
			printf("\n");
		}
	}
	
}