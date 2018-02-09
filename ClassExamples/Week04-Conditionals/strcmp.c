/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: strcmp demo.
*/
#include <stdio.h>

int main(){
	char word[50];
	char word2[50];
	printf("Enter a word!\n");
	scanf("%s", word);
	printf("Enter another word!\n");
	scanf("%s", word2);
	
	if( strcmp(word, "wow") == 0){
		printf("I thought wow was a good word too!\n");
	}else{
		printf("%s is pretty boring, you need more coffee.\n", word);
	}
	
	if( strcmp(word, word2) < 0){
		printf("word less than word2\n");
	}else{
		printf("word is greater than word2\n");
	}
}