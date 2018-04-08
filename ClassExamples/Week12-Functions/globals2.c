#include <stdio.h>
int life = 100;
int bac = 4;
int bbq = 8;

void status(){
	printf("Life: %d BAC: %d BBQ: %d\n", life, bac, bbq);
}

void soberUp(){
	life = life + 10;
	bac = 0;
	bbq = bbq + 1;
}

int main(){
	life = 100;
	bac = 4;
	bbq = 8;
	
	status();
	bac = 10;
	life = 90;
	status();
	soberUp();
	status();
}