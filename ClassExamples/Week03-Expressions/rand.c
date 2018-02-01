/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: Basic demo of random number generation.
*/
#include <stdio.h>

int main(){
	srand( time(0) ); // Start the random number generator using a value
		// which changes, as in the current time (seconds since 1970).
		// Note only do srand ONCE at the beginning of main, or you'll
		// jump back to the same spot in the rand 'table'.
	
	// Random numbers less than 100
	printf("%d\n", rand() % 100);
	printf("%d\n", rand() % 100);
	printf("%d\n", rand() % 100);
	
	// Roll a single die 5 times.
	printf("Die: %d\n", rand() % 6 + 1);
	printf("Die: %d\n", rand() % 6 + 1);
	printf("Die: %d\n", rand() % 6 + 1);
	printf("Die: %d\n", rand() % 6 + 1);
	printf("Die: %d\n", rand() % 6 + 1);
	
	// Roll 2 die and sum their numbers.
	printf("2 Die: %d\n", (rand() % 6) + (rand() % 6) + 2);
}