#include <stdio.h>

// Returns a random number from low to high, inclusive.
int randRange(int low, int high){
	return rand() % (high - low + 1) + low;
}

// Returns a random number from 1-6 inclusive.
int rollDie(){
	//return rand() % 6 + 1;
	return randRange(1,6);
}

// Return back the sum of n die rolls.
int sumOfNDie(int n){
	int i = 0;
	int sum_so_far = 0;
	for(i = 0; i < n; i++){
		sum_so_far = sum_so_far + rollDie();
	}
	return sum_so_far;
}



int main(){
	srand(time(0));
	// displays the values of rolling 20 die.
	int i = 0;
	for(i = 0; i < 20; i++){
		printf("Die %d: %d \n", i, rollDie() );
	}
	
	printf("%d \n", randRange(10,20) );
	printf("%d \n", sumOfNDie(1) );
	printf("%d \n", sumOfNDie(1) );
	printf("%d \n", sumOfNDie(1) );
	printf("%d \n", sumOfNDie(2) );
	printf("%d \n", sumOfNDie(2) );
	printf("%d \n", sumOfNDie(2) );
	return 0;
}