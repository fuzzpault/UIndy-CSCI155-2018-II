/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: Character array demo.
*/
#include <stdio.h>
#include <string.h>

int main(){
	char word[100];
	scanf("%s", word);
	printf("%s is %d letters long.\n", word, (int)strlen(word));
	
	// Put in a null character (0) or '\0' in the array and
	// printf and strlen will stop reading there!
	word[2] = 0;
	
	printf("%s is %d letters long.\n", word, (int)strlen(word) );
	
	char another[100];
	
	// This will copy one string to another, but only until the null character
	// is seen.  In this case at index 2.
	strcpy(another, word);
	//another = word;	// Sadly this doesn't work because word and another
						// are actually arrays.
	
	printf("another: %s\n", another);
}