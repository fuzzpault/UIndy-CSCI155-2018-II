/*
	Name: Paul Talaga
	Date: April 19, 2018
	Desc: Pointer practice.
*/
#include <stdio.h>

int main(){
	/*
	int a = 5;
	int* b = &a;
	
	printf("*b: %d \n", *b);
	printf("a: %d \n", a);
	(*b)++;
	printf("*b: %d \n", *b);
	printf("a: %d \n", a);
	*/
	
	
	int array[] = {1,2,3,4,5,6,7};
	int* b = array;
	
	
	//*(b) = *(b + 3);
	int i = 0;
	for(i = 0; i < 7; i++){
		printf("*b: %d, %p \n", *b , b);
		b++;
	}
	
	char* word = "Hello world";
	
	
	//*(b) = *(b + 3);
	for(i = 0; i < strlen(word); i++){
		printf("*word: %c, %p \n", *word , word);
		word++;
	}
	
	/*
	*b = 5;
	
	printf("5 = %d\n", array[0] );
	
	*/
	
	
}