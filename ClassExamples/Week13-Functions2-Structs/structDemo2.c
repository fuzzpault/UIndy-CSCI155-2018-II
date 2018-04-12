/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: Card struct example.
*/
#include <stdio.h>

typedef struct card_tt{
	int value;
	int suit;
} card_t;

void printCard(card_t c){
	printf("%d of", c.value);
	if( c.suit == 0){
		printf(" Diamonds\n");
	}else if( c.suit == 1){
		printf(" Hearts\n");
	}else if( c.suit == 2){
		printf(" Clubs\n");
	}else if( c.suit == 3){
		printf(" Spades\n");
	}else{
		printf("%d not known", c.suit);
	}
}


int main(){
	card_t a;
	a.value = 5;
	a.suit = 0;
	printCard(a);
}