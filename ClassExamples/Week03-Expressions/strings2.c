/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: String demo showing effect of null terminator.
*/
#include <stdio.h>
#include <string.h>

int main(){
	char word[50];
	scanf("%s", word);
	printf("%s has %d characters\n", word, (int)strlen(word));
	
	word[5] = 0;
	
	printf("%s has %d characters\n", word, (int)strlen(word));
	
	char another[50];
	
	strcpy(another,word);
	//another = word;
	
	printf("%s has %d characters\n", another, (int)strlen(another));
	
}