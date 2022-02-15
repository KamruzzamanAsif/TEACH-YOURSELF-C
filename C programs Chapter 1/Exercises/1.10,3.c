#include<stdio.h>

int convert();

int main(){

    int cups;

    cups=convert();

    printf("Result is %d",cups);

    return 0;}

int convert(){

    int ounces;

    printf("Enter:");

    scanf("%d",&ounces);

    return 8*ounces;

}

