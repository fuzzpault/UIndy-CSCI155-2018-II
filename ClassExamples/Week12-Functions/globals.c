#include <stdio.h>
int life = 100;
int attack = 5;
int defense = 90;

void printStats(){
	printf("Life: %d, Attack: %d, Defense: %d\n", life, attack, defense);
}

void doAttack(){
	life--;
}

int main(){
	life = 100;
	attack = 5;
	defense = 90;
	
	printStats();
	defense++;
	doAttack();
	printStats();
}