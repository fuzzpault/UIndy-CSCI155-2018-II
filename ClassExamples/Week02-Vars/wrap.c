/*
	Name: Paul Talaga
	Date: Jan 25, 2018
	Desc: Demo of integer, unsigned integer, and hex numbers.
*/
#include <stdio.h>

int main(){
	int n = 0;
	n--; // Same as n = n - 1
	//n++; // Same as n = n + 1;
	printf("n: %d\n", n);  // This works as normal
	
	// An unsigned int can't be negative, but what happens when we go 'down'
	// from 0?  It wraps around to the most positive thing possible.
	unsigned int n2 = 0;	
	n2--;
	printf("n2: %u\n", n2); // %u is for unsigned integers
	
	// Hexidecimal can also be used for numbers.  Hex numbers start with
	// 0x, then hex digits (0-9a-f).  
	// Note this is really 0x0000000f
	// One hex digit is 4 bits, 2 hex digits 1 byte, and an integer is
	// 4 bytes, so 8 hex digits.
	int n3 = 0xf;
	printf("n3: %d\n", n3);
	
	return 0;
}