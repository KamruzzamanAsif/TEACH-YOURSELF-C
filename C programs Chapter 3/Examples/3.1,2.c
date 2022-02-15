#include<stdio.h>
int main(){

    int a,b;
    char ch;

    printf("Do you want to:\N Add,Subtract,Multiply or Divide?\n Enter first letter:");

    ch=getchar();

    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);

    if(ch=='A') printf("%d,",a+b);
    if(ch=='S') printf("%d",a-b);
    if(ch=='M') printf("%d",a*b);

    if(ch=='D' && b!=0) printf("%d",a/b);

    return 0;


    }


