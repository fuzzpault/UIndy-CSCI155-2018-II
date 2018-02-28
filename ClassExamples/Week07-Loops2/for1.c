/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Converting a while loop to a for loop.
*/
#include <stdio.h>

int main(){
	int number = 0;
	printf("How many times should I print 'hungry'?\n");
	scanf("%d", &number);
	
	int i = 0;
	/*while(i < number){
		printf("hungry ");
		i++;
	} */
	for(i = 0; i < number; i++){
		printf("hungry ");
	}
	printf("hippos.\n");
	
	
	
}