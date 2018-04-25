#include <stdio.h>

void doStuff(int* thing){
	*(thing) = 5;
	thing[3] = 10;
}

int main(){
	int never = 89;
	int* over = &never;
	int* predict[3];
	int quality[] = {6,7,8};
	int* raisins = NULL;
	
	*over = 0;
	raisins = (quality + 1);
	*(predict + 1) = raisins;
	doStuff(quality);
	predict[0] = *(predict + 1);
	predict[2] = raisins;
}