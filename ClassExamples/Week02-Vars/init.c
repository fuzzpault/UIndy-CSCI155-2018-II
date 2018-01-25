/*
	Name: Paul Talaga
	Date: Jan 25, 2018
	Desc: Initialazation demo
*/

#include <stdio.h>

int main(){
	// Note the follwing 2 variables are not initialized!
	char name[50];
	int shrug;
	
	// Lets see what is there!
	printf("Shrug: %d\n", shrug);
	printf(" Name: %s\n", name);
	
	// Now set them
	shrug = 1;
	scanf("%s", name);
	
	printf("Shrug: %d\n", shrug);
	printf(" Name: %s\n", name);
	
	return 0;
}