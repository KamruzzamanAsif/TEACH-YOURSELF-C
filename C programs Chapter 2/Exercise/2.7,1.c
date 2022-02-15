#include<stdio.h>

int main(){

    int a,b,count;
    a=5;

    for(count=0;count<10;count++){

    printf("Guess a number between 0 to 10:");
    scanf("%d",&b);

    if(b==a){printf("Right!");
            break;}

        else if(b<a) printf("Your estimation is less");

        else printf("Your estimation is more");



        }}
