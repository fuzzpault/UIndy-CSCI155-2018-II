#include <stdio.h>

int add2(int a){
	int ret = a;
	ret = ret + 2;
	return ret;
}

void sayHi(int number){
	int i = 0;
	for(i = 0; i < number; i++){
		printf("Hi\n");
	}
}

int main(){
	int ret;
	printf("%d \n\n", add2(5) );
	printf("%d \n\n", add2(9) );
	sayHi(5);
	return 0;
}