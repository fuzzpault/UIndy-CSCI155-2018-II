/*  Name: Paul Talaga
    Date: Jan 11, 2018
    Desc: Prints the powers of two
*/
#include <stdio.h>

int main(void){
	printf("How many powers of two should I print?");
	int times;
	scanf("%d", &times);
	
	int res = 0;
	for(int i = 0; i < times; i++){
		if( i == 0){
			res = 1;
		}else if(i == 1){
			res = 2;
		}else{
			res = res * 2;
		}
		printf("2^%d = %d \n", i, res);
	}
	
	return 0;
}