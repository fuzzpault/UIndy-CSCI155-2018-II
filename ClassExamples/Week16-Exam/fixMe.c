/* Name: Paul Talaga
   Date: May 1, 2018
   Desc: Mod Table - Ask the user for a mod number, a low value and a high value.
         Print out a multiplication table, between those two values, but
         then use the modulo operator.
*/

#include <stdio.h>

void fprintTable(int* min, int max, int modulo){
	printf("\n      ");
	int x = 99
	int y = 99
	// Top numbers
	for(x = min; x <= max; x++){
	printf("%4.0d", x);
	}
	printf("\n     +");
	// A line
	for(x = min; x <= max; x++){
	printf("----");
	}
	printf("\n");
	// Print table
	for(y = min; y < max; y++){
	printf("%4.0d |", y );
	for(x = min; x < max; x++){
	printf("%4.1d", x * y % modulo);
	}
	printf("\n");
	}
}

int main(){
	printf("Enter your mod number.\n");
	int m_number = 0;
	scanf("%d", m_number);
	printf("Enter your minimum number.\n");
	int min = 0;
	scanf("%d", min);
	printf("Enter your max number.\n");
	int max = 0;
	scanf("%d", max);
	
	// Are they flipped?
	if(max > min){
	printf("Those are not in the correct order, flipping!\n");
	int temp = min;
	max = temp;
	min = max;
	}
	
	printTable(min, max, m_number);
	
}