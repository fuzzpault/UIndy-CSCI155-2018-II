/*
	Name: Paul Talaga
	Date: Jan 25, 2018
	Desc: Char demo
*/
#include <stdio.h>

int main(){
	char c = 'A';  // 'A' has value 65 on the ASCII table: http://www.asciitable.com/

	int i = 0;
	// Add to the character and see what it corresponds to.
	for(i = 0; i < 50; i++){
		printf("%d  is %c\n",c + i,  c + i);
	}
	
	return 0;
}