/*
	Name: Paul Talaga
	Date: Jan 23, 2018
	Desc: Variables and where they are in memory (RAM).
*/

#include <stdio.h>

int main(){
	
	int fav_number = 0;
	int number_of_hams = 10;
	
	fav_number = 6.7;   // Shows that a float can be put into an integer,
						// but it looses its decimal portion.
	
	// Note the locations of these 2 variables are expressed in hexidecimal
	// numbers.  Also note they are 4 different (4 bytes), showing one int
	// takes up 4 bytes in memory.  2^(4*8) = 4 billion, which is the maximum
	// number of different values an int can take.
	
	printf("fav_number: %d Stored at: %p?\n", fav_number, &fav_number);
	printf("number_of_hams: %d Stored at: %p?\n", number_of_hams, &number_of_hams);
	
	return 0;
	
}