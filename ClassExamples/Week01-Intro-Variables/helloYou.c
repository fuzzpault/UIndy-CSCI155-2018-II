/*  Name: Paul Talaga
    Date: Jan 11, 2018
    Desc: Prints hello world to the screen!
*/
#include <stdio.h>

int main(void){
    
    int number = 0;
    char name[100];
    
    printf("What is your name?");
    scanf("%s", name);
    printf("Enter your favorite number");
    scanf("%d", &number);
    
    printf("%s, your number is: %d",name, number);
    
    return 0;
}