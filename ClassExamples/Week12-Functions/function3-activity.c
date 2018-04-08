#include <stdio.h>

void drawLineC(int width, char c){
	int i = 0;
	for(i = 0; i < width; i++){
		printf("%c", c);
	}
	printf("\n");
}

void drawLine(int width){
	drawLineC(width, '*');
}

int main(){
	// Draws a line of *'s on the screen of the given width, followed by a \n
	drawLineC(10,'*');
	drawLine(20);
	int i = 0;
	for(i = 1; i <= 5; i++){
		drawLineC(i,'.');
	}
	for(i = 4; i > 0; i--){
		drawLineC(i,'.');
	}
	// Draws a box of *'s on the screen with the width and height, followed by a \n
	//drawBox(5,10);
	//drawBox(10,20);
}