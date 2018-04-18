/*
	Name: Paul Talaga
	Date: April 17, 2018
	Desc: Finding probabilities of straights, flushes, and straight flushes.
*/
#include <stdio.h>
#define HANDS 1000000

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

void randomize(card_t* array, int length){
	int mess_up_times = 0;
	for(mess_up_times = 0; mess_up_times < length * 3; mess_up_times++){
		int n1 = rand() % length;
		int n2 = rand() % length;
		card_t temp = array[n1];
		array[n1] = array[n2];
		array[n2] = temp;
	}
}

void randomize2(card_t* array, int length){
	int i = 0;
	for(i = 0; i < length - 1; i++){
		int n1 = (rand() % (length - i - 1)) + i + 1;
		int n2 = i;
		card_t temp = array[n1];
		array[n1] = array[n2];
		array[n2] = temp;
	}
}

int flush(card_t* array){
	return array[0].suit == array[1].suit &&
			array[0].suit == array[2].suit &&
			array[0].suit == array[3].suit &&
			array[0].suit == array[4].suit;
}

int straight1(card_t* array){
	// find min
	int min = array[0].value;
	int i = 0;
	for(i = 1; i < 5; i++){
		if(array[i].value < min)min = array[i].value;
	}
	// Now we search for min + 1, min + 2, min + 3, and min + 4
	int plus = 1;
	for(plus = 1; plus <=4; plus++){
		int found = 0;
		for(i = 0; i < 5; i++){
			if( array[i].value == plus + min){
				found = 1;
				break;
			}
		}
		// If we never found a card, it's not a straight!
		if( !found){
			return 0;
		}
	}
	return 1;
}

int main(){
	srand(time(0));
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
	
	int n = 0;
	int straight_count = 0;
	int flush_count = 0;
	int straight_flush_count = 0;
	for(n = 0; n < HANDS; n++){
		randomize2(deck, 52);
		/*for(i = 0; i < 5; i++){
			printCard(deck[i]);
		}*/
		if(straight1(deck))straight_count++;
		if(flush(deck))flush_count++;
		if(straight1(deck) && flush(deck))straight_flush_count++;
		//printf("\n");
	}
	
	printf("Out of %d hands:\n", HANDS);
	printf("Straights: %d  %f%% \n", straight_count, (float)straight_count * 100 / HANDS);
	printf("Flushes: %d %f%%\n", flush_count, (float)flush_count * 100 / HANDS);
	printf("Straight Flushes: %d %f%%\n", straight_flush_count, (float)straight_flush_count * 100 / HANDS);
}