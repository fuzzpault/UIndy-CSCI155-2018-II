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
	return rand() % (max - min + 1) + min;
}

int main(){
	srand(time(0));
	int i  = 0;
	// Roll 10 die and print out each value
	for(i = 0; i < 10; i++){
		//printf("Roll # %d: %d\n", i + 1, dieRoll());
	}
	// Print out 10 random numbers in a range
	
	for(i = 0; i < 10; i++){
		int min = i * 100;
		int max = (i + 1) * 100;
		printf("%d %d %d\n", min, max, randRange(min, max) );
	}
}