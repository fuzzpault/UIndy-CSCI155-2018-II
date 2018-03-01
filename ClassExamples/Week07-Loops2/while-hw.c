#include <stdio.h>

int main(){
	srand(time(0));
	
	printf("1. Line of fingers.\n");
	printf("2. Range\n");
	printf("3. Mod\n");
	
	printf("Which do you want to do, or 0 to exit.\n");
	int choice = 0;
	scanf("%d", &choice);
	
	if(choice == 1){ // Fingers
		printf("How many fingers do you want?\n");
		int fingers = 0;
		scanf("%d", &fingers);
		while(fingers > 0){
			if( rand() % 100 >= 10 ){
				printf("╭∩╮(Ο_Ο) ");
			}else{
				printf(" (Ο_Ο)╭∩╮");
			}
			fingers--;
		}
		printf("\n");
	}else if(choice == 2){ // Range
		int low = 0;
		int high = 0;
		printf("Give me 2 numbers.\n");
		scanf("%d", &low);
		scanf("%d", &high);
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
	}else if(choice == 3){ // Mod
		int x = 0;
		int y = 0;
		printf("Give me x mod y numbers.\n");
		scanf("%d", &x);
		scanf("%d", &y);
		while(x >= y){
			printf("%d mod %d\n", x, y);
			x = x - y;
		}
		printf("Answer is: %d\n", x);
		printf("\n");
	}
	
	// ╭∩╮(Ο_Ο)
}