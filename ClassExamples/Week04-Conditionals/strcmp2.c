/*
	Name: Paul Talaga
	Date: Feb 8, 2018
	Desc: Demo of using strcmp to detect if two strings contain the same letters.
*/
#include <stdio.h>

int main(){
	char word[50];
	printf("Enter a word.");
	scanf("%s", word);
	
	
	// Note strcmp returns 0 if they are the same.  It can be used to find
	// which word (string) is 'less' or 'greater' in alphabetic order.
	if( strcmp(word, "pizza") == 0 ){
		printf("Yea, pizza is a good word!\n");
	}else{
		printf("You are lacking in good food taste, pizza is always\n");
		printf("the right answer.\n");
	}
	
	return 0;
}