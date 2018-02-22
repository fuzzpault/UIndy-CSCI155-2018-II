/*
	Name: Paul Talaga
	Date: Feb 22, 2018
	Desc: Menu example with bacon and donuts.
*/
#include <stdio.h>

int main(){
	
	int choice = 1;
	
	while(choice != 0){
		
		printf("What did you have for breakfast?\n");
		printf("1. Nothing\n");
		printf("2. Bacon\n");
		printf("3. Donuts\n");
		printf("4. Cereal\n");
		printf("5. Chocolate cake.\n");
		printf("0. I don't want to tell you.\n");
		
	
	
		scanf("%d", &choice);
		if(choice == 1){ // Nothing
			printf("You should have eaten breakfast.\n");
		}else if(choice == 2){ // Bacon
			printf("How many pieces of ~ did you have?");
			int bacon_count = 0;
			int x = 0;
			scanf("%d", &bacon_count);
			while(bacon_count < 0){
				printf("Everybody eats bacon for breakfast, enter how many did\n");
				printf("you really had.\n");
				scanf("%d", &bacon_count);
			}
			while(x < bacon_count){
				printf("~");
				x++;
			}
			printf("\n");
		}else if(choice == 3){ // Donuts
			printf("How many donuts did you have?");
			int donut_count = 0;
			int x = 0;
			scanf("%d", &donut_count);
			if(donut_count < 0){
				printf("I fixed your mistake with the - sign.\n");
				donut_count = -donut_count;
			}
			while(x < donut_count){
				if(x > 0){
					if(x % 4 == 0){
						printf("\n");
					}
					if(x % 12 == 0){
						printf("\n");
					}
				}
				printf("O");
				x++;
			}
			printf("That was %d box", donut_count / 12); 
			if(donut_count / 12 > 1){
				printf("es");
			}
			printf(" of full donunts, and\n");
			printf("%d extra donuts.", donut_count % 12);
			printf("\n");
		}
	}
}