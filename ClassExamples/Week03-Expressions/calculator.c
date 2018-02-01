/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: Calculates based on input from the user
		  A solution to HW02.
*/
#include <stdio.h>

int main(){
	
	float inches = 0.0;
	printf("Give me a number and I'll convert it to feet.\n");
	scanf("%f", &inches);
	printf("%f inches = %f feet\n", inches, inches / 12.0);
	
	float f = 0.0;
	printf("Give me a fahrenheit and I'll convert it to celcius.\n");
	scanf("%f", &f);
	float c = (f - 32.0) * 5.0 / 9.0;
	printf("%f F = %f C\n", f, c);
	
	float years = 0.0;
	float months = 0.0;
	printf("How many times as the earth gone around the sun for you?\n");
	scanf("%f", &years);
	printf("How many months since your last birthday?\n");
	scanf("%f", &months);
	printf("%f years %f months old = %f seconds old\n", years, 
		months, 
		years * 365 * 24 * 60 * 60 + months * 30 * 24 * 60 * 60);
	
	
	return 0;
}