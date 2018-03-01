#include <stdio.h>

int main(){
	int width = 0;
	int height = 0;
	printf("Give me width and height numbers.\n");
	scanf("%d", &width);
	scanf("%d", &height);
	
	int y = 0;
	for(y = 0; y < height; y++){
		int x = 0;
		for(x = 0 ; x < width; x++){
			printf("*");
		}
		printf("\n");
	}
}