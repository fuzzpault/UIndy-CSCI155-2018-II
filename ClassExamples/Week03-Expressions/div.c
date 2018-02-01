/*
	Name: Paul Talaga
	Date: Feb 1, 2018
	Desc: Demonstration of integer division.
*/

#include <stdio.h>

int main(){
	int a = 0; 
	int b = 0;
	scanf("%d", &a);
	scanf("%d", &b);
	
	printf("%d / %d = %f\n", a, b, a / b ); // Will give wrong result because
		// a and b are ints, so it will do integer division (no decimals)
	
	printf("%d / %d = %f\n", a, b, ((float)a) / b ); // Will give correct results
		// because a is converted into a float before doing the division.
		// It will actually upconvert the b into a float.
		
	// Or, just change a and b to be floats or doubles!
}