/*
	Name: Paul Talaga
	Date: Feb 6, 2018
	Desc: Examples of ranges, with modulo.
*/
#include <stdio.h>

int main(){
	printf("What number grade did you get?\n");
	int score = 0.0;
	scanf("%d", &score);
	
	if(score > 70){
		printf("You pass!\n");
	}else{
		printf("You fail!\n");
	}
	
	printf("You got an ");
	
	if(score >= 90){
		printf("A");
	}else if(score >= 80){ // 80 < score < 90  DONT DO this as it reads it as
						   // (80 < score) < 90 and 80 < score is either
						   // true (1) or false (0)
						   // (80 < score) || (score < 90) would be correct.
		printf("B");
	}else if(score >= 70){ 
		printf("C");
	}else if(score >= 60){ 
		printf("D");
	}else{
		printf("F");
	}
	
	// Use modulo to determine + or -.  % 10 will return the last digit of the #.
	if(score % 10 > 7){
		printf("+");
	}else if(score % 10 < 3){
		printf("-");
	}
	
	printf(".\n");
	
	return 0;
}