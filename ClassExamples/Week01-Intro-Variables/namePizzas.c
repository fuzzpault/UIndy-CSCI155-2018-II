/*  Name: Paul Talaga
    Date: Jan 11, 2018
    Desc: How many pizzas do you want?
*/
#include <stdio.h>

int main(void){
    
    char name[40];
    int pizza_count;
    
    printf("What is your name?\n");
    scanf("%s", name);
    printf("Hello %s\n", name);
    
    printf("How many pizzas do you want?");
    scanf("%d",&pizza_count);
    printf("Wow, %d is a lot of pizzas!\n\n", pizza_count);

    return 0;
}