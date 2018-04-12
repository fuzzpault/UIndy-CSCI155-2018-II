/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: Even if you don't return a value in a function, it returns 0.
*/
#include <stdio.h>

int treysHappiness(){
	return 100;
}

int treyHappy(){
	int input = 0;
	printf("Is Trey Happy?");
	scanf("%d", &input);
	if( input == 1){
		return 1;
	}else{
		return 0;
	}
}

float bobHappiness(){
	return;
}

int main(){
	treysHappiness();
	5 + 6;
	printf("%f \n", bobHappiness() );
	
	if( treyHappy() ){
		printf("Finally, he's usually sad. ");
	}
}