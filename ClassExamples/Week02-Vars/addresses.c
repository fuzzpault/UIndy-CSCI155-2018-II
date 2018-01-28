/*
	Name: Paul Talaga
	Date: Jan 23, 2018
	Desc: Vars
*/
#include <stdio.h>

int main(void){
	
	int num_pizzas = 5;
	int num_donuts = 80;
	int num_tacos = 132;
	
	printf("Pizzas: %d at location %p \n", num_pizzas, &num_pizzas);
	printf("Donuts: %d at location %p \n", num_donuts, &num_donuts);
	printf(" Tacos: %d at location %p \n", num_tacos, &num_tacos);
	
	return 0;
}