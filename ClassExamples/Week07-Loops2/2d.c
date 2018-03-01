#include <stdio.h>

int main(){
	int width = 0;
	int height = 0;
	printf("Give me width and height numbers.\n");
	scanf("%d", &width);
	scanf("%d", &height);
	
	int x = 0;
	int y = 0;
	
	for(y = 0; y < height; y++){
		for(x = 0; x < width; x++){
			printf("$");
		}
		printf("\n");
	}
	
	printf("----------\n");
	
	int i = 0;
	for(i = 0; i < width * height; i++){
		if(i % width == 0){
			printf("\n");
		}
		printf("$");
	}
}