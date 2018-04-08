#include <stdio.h>

int addOne(int number){
	number = number + 1;
	return number;
}

int addOne2(int* number){
	*number = *number + 1;
	return *number;
}

int main(){
	int a = 0;
	printf("%d, %d \n", a, addOne(a) );
	printf("%d, %d \n", a, addOne(a) );
	
	printf("%d, %d \n", a, addOne2(&a) );
	printf("%d, %d \n", a, addOne2(&a) );
}