/*
	Name: Paul Talaga
	Date: April 10, 2018
	Desc: Struct demo using cards.
*/
#include <stdio.h>

typedef struct card_t_struct{
	int value; // 1 through 13
	int suit; // 0 is clubs, 1 is diamonds, 2 is spades, 3 is hearts
} card_t;

void printCard(card_t card){
	if(card.value == 1){
		printf("Ace");
	}else if(card.value == 11){
		printf("Jack");
	}else if(card.value == 12){
		printf("Queen");
	}else if(card.value == 13){
		printf("King");
	}else{
		printf("%d", card.value);
	}
	printf(" of ");
	if(card.suit == 0){
		printf("Clubs");
	}else if(card.suit == 1){
		printf("Diamonds");
	}else if(card.suit == 2){
		printf("Spades");
	}else if(card.suit == 3){
		printf("Hearts");
	}else{
		printf("%d not a suit", card.suit);
	}
	printf("\n");
}

int main(){
	card_t deck[52] = {};
	
	int i = 0;
	int s = 0;
	for(s = 0; s < 4; s++){
		int v = 1;
		for(v = 1; v < 14; v++){
			deck[i].value = v;
			deck[i].suit = s;
			i++;
		}
	}
	
	for(i = 0; i < 52; i++){
		printCard(deck[i]);
	}
	
	
}