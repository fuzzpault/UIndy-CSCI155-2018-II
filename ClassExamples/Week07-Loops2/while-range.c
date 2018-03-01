#include <stdio.h>

int main(){
	int choice = 1;
	
	while(choice != 0){
		printf("0. Exit\n");
		printf("1. Line of monies.\n");
		printf("2. Fingers\n");
		printf("3. Range\n");
		printf("4. Mod\n");
		scanf("%d", &choice);
		
		if(choice == 1){ // Monies
			int monies = 0;
			printf("How many monies do you want?\n");
			scanf("%d", &monies);
			while(monies > 0){
				printf("$");
				monies--;
			}
			printf("\n");
		}else if(choice == 2){  // Fingers
			int fingers = 0;
			int x = 0;
			printf("How many fingers do you want?\n");
			scanf("%d", &fingers);
			while(x < fingers){
				if(rand() % 10 < 9){
					printf("╭∩╮(Ο_Ο) ");
				}else{
					printf("(Ο_Ο)╭∩╮ ");
				}
				x++;
			}
			printf("\n");
		}else if(choice == 3){	// Range
			int low = 0;
			int high = 0;
			printf("Give me 2 numbers in any order.\n");
			scanf("%d", &low);
			scanf("%d", &high);
			// Fix the order
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
		}else if(choice == 4){	// Mod
			int x = 0;
			int y = 0;
			printf("Give me 2 numbers x mod y\n");
			scanf("%d", &x);
			scanf("%d", &y);
			while(x > y){
				printf("%d mod %d  \n", x, y);
				x = x - y;
			}
			printf("%d \n", x);
		}
		
		
	}
	printf("Thank you for using my amazingly amazing program!\n");
	
	return 0;
}