/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Infinite loop, with break.
*/
#include <stdio.h>

int main(){
	int a = 0;
	for(;;){ // The same while(1 == 1){
		printf("."); 
		a++;
		if(a > 10){
			break;	// Will break out of the loop
		}
	}
	printf("Made it out alive.\n");
	
	return 0;
}