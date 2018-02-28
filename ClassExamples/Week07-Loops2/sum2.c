/*
	Name: Paul Talaga
	Date: Feb 27, 2018
	Desc: Finding the sum of integers.
*/
#include <stdio.h>

int main(){
	int score = 100;
	int sum = 0;
	int count = 0;
	printf("Enter your question points.  Enter a negative to stop.\n");
	scanf("%d", &score);
	while(score > 0){
		count++;
		sum = sum + score;
		scanf("%d", &score);
	}
	
	printf("Count: %d Sum: %d Avg: %f\n", count, sum, sum/(float)count );
}