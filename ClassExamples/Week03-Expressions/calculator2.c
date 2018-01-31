/*
	Name: Paul Talaga
	Date: Jan 30, 2018
	Desc: Solution to the calculator HW2 assignment.
*/
#include <stdio.h>
#include <math.h>

int main(){
	
	float weight = 0.0;
	float miles = 0.0;
	
	printf("How much does the earth like you? in lb?");
	scanf("%f", &weight);
	printf("How many miles did you move?\n");
	scanf("%f", &miles);
	
	float walk_cal = weight * miles * 0.53;  // 0.53 cal/lb / mile
	float run_cal = weight * miles * 0.75;	// 0.75 cal/lb / mile
	
	printf("You burnt %f calories walking!\n", walk_cal);
	printf("You burnt %f calories running!\n", run_cal);
	
	printf("If walking, you can now eat %f pieces of cake!\n", walk_cal / 352);
	printf("If running, you can now eat %f pieces of cake!\n", run_cal / 352);
	
	float cake_pieces = 0.0;
	printf("How many pieces of cake do you want to eat?\n");
	scanf("%f", &cake_pieces);
	
	printf("You'd need to walk %f miles to burn that off!\n", cake_pieces * 352 / weight / 0.53);
	printf("You'd need to run %f miles to burn that off!", cake_pieces * 352 / weight / 0.75);
	 
	float f = 0.0;
	float mph = 0.0;
	
	printf("What is the temperature in F?\n");
	scanf("%f", &f);
	printf("What is the wind speed in mph?\n");
	scanf("%f", &mph);
	// Formula only valid for mph less than 3
	if( mph < 3.0){
		printf("It feels like %f\n", f);
	}else{
		printf("It feels like %f\n", 
			35.74 + 0.6215 * f - 35.75 * pow(mph, 0.16) + 0.4275 * f * pow(mph, 0.16)  );
	}
	
}