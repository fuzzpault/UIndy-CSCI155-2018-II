/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: Caesar encryption/decryption program.
*/
#include <stdio.h>
#include <string.h>

int main(){
	
	char word[100];
	int key = 0;
	
	printf("Give me a word to encrypt.\n");
	scanf("%s", word);
	printf("What is the key? (#)");
	scanf("%d", &key);
	
	int i = 0;
	// strlen find the length of the inputted word
	for(i = 0; i < strlen(word); i++){
		// Shift every letter (lowercase) up by key, wrapping back
		// to a if needed via modulo (%).
		word[i] = ((word[i] + 26 - 'a' + key) % 26) + 'a';
	}
	
	printf("Encrypted/decrypted that is %s\n", word);
	
	return 0;
}