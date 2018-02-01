/*
	Name: Paul Talaga
	Date: Feb 1, 2018
	Desc: Demo of rolling 3 die at a time and keeping track of how many
		  times each value was rolled.
*/
#include <stdio.h>

#define ARR_LEN 19

int main(){
	srand( time(0) ); // Start the random number generator using a value
		// which changes, as in the current time (seconds since 1970).
		// Note only do srand ONCE at the beginning of main, or you'll
		// jump back to the same spot in the rand 'table'.
	
	int counts[ARR_LEN] = {}; // Used to store each of the counts
	
	int i = 0;
	for(i = 0; i < 100000; i++){
		int roll = (rand() % 6) + 1 + (rand() % 6) + 1 + (rand() % 6) + 1;
		// Increment the number in the spot in the array corresponding to the
		// sum of the die.
		counts[ roll ]++;
	}
	
	// Print the array
	for(i = 0; i < ARR_LEN; i++){
		printf("%02d: %d \n", i, counts[i]);	
		// the %02d means to print using 2 digits. (so the #'s line up)
	}
	
	return 0;
}