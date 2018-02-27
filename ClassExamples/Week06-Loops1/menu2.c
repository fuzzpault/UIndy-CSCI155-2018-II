/*
	Name: Paul Talaga
	Date: Feb 22, 2018
	Desc: Demo of a menu, taking input from the user, and duplicating
		  characters and ASCII art.
  Credit: http://www.chris.com/ascii/joan/www.geocities.com/SoHo/7373/food.html
*/

#include <stdio.h>

void printImage(char** image, int width, int height, int count){
	while(count > 3){
		int row = 0;
		while(row < height){
			int col = 0;
			while(col < width){
				printf("%s ", image[row] );
				col++;
			}
			printf("\n");
			row++;
		}
		count = count - width;
	}
	width = count;
	if(count > 0){
		int row = 0;
		while(row < height){
			int col = 0;
			while(col < width){
				printf("%s ", image[row] );
				col++;
			}
			printf("\n");
			row++;
		}
	}
}

int main(){
	srand(time(0));
	int choice = 1;
	
	while(choice != 0){
	
		
		printf("What did you have for breakfast?\n");
		printf("1. Eggs and sausage\n");
		printf("2. cereal\n");
		printf("3. donuts\n");
		printf("4. chocalate cake\n");
		printf("0. Exit\n");
		
		
		scanf("%d", &choice);
		
		if(choice == 1){// eggs and sausage
			printf("How many eggs and sausages did you have?\n");
			int egg_count = 0;
			int sausage_count = 0;
			scanf("%d %d", &egg_count, &sausage_count);
			
			while(egg_count > 0 || sausage_count > 0){
				if( rand() % 2 == 0 && egg_count > 0){
					printf("o");
					egg_count--;
				}else if(sausage_count > 0){
					printf("<==>");
					sausage_count--;
				}
			}
			printf("\n");
		}else if(choice == 2){ // cereal
			printf("How many bowls of cereal did you have?\n");
			int bowl_count = 0;
			scanf("%d", &bowl_count);
			int bowl_count2 = 1;
			while(bowl_count > 0){
				printf("%d.\n", bowl_count2);
				bowl_count2++;
				printf("  _..-------.._ \n");
	            printf(".' .-._.-._.-. '.\n");
	    		printf("\\'--.._____..--'/\n");
	    		printf(" \\             /\n");
	    		printf("  '._________.'\n");
				bowl_count--;
			}
		}else if(choice == 3){ // Donuts
			printf("How many donuts did you have?\n");
			int donut_count = 0;
			scanf("%d", &donut_count);
			char* donut[7];
			donut[0] = "   _.-------._    ";
		    donut[1] = " .'    ___    '.  ";
		    donut[2] = "/     (___)     \\ ";
		    donut[3] = "|'._         _.'| ";
		    donut[4] = "|   `'-----'`   | ";
		    donut[5] = " \\             /  ";
			donut[6] = "  '-.______..-'   ";
			
			printImage(donut, 4, 7, donut_count);
			
			
		}else if(choice == 4){ // Cake
			printf("How many cakes did you have?\n");
			int cake_count = 0;
			scanf("%d", &cake_count);
			char* cake[10];
			cake[0] = "        __.......__         ";
        	cake[1] = "   ,-\"''           ''\"-.    ";
        	cake[2] = "   |;------.-'      _.-'\\   ";
        	cake[3] = "   ||______|`  ' ' `    |   ";
        	cake[4] = "   ||------|            |   ";
    		cake[5] = "  _;|______|            |_  ";
    		cake[6] = "(```\"\"\"\"\"\"\"|            |``)";
    		cake[7] = "\\'._       '-.........-'_.'/";
			cake[8] = " '._`\"\"===........===\"\"`_.' ";
        	cake[9] = "    ``\"\"\"==========\"\"\"``\"   ";
			
			printImage(cake, 4, 10, cake_count);
		}else{
			printf("That wasn't an option.\n");
		}
	}
}

       