/*
	Name: Paul Talaga
	Date: March 6, 2018
	Desc: Strings are really character arrays!
*/
#include <stdio.h>

int main(){
	char* word = "This is my word";
	
	printf("%s\n", word);
	
	int i = 0; 
	for(i = 0; i < 10; i++){
		printf("%d: %c %d \n", i,word[i],  word[i]);
	}
	
}