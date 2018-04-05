#include <stdio.h>

void hello(int times){
	int i = 0;
	printf("H");
	for(i = 0; i < times; i++){
		printf("i");
	}
	printf("!\n");
}

int add(int a, int b){
	return a + b;
}

int rand10(){
	int ret = 0;
	ret = rand() % 10;
	return ret;
}

int dieRoll(){ // Returns a single roll of a die
	return rand() % 6 + 1;
}

int dieRoll2(){ // Returns a single roll of a die
	int roll = 0;
	roll = rand() % 6 + 1;
	return roll;
}

int randRange(int min, int max){ // Returns a random number from min to max
	
}

int main(){
	printf("I'm in main!\n");
	hello(1);
	hello(10);
	printf("5 + 6 = %d \n", add(5,6) );
	printf("Your random number is: %d\n", rand10() );
	
	// Roll 10 die and print out each value
	// Print out 10 random numbers in a range
}