#include<stdio.h>
int main()
{
    int a,b;
    char ch;

    printf("Do you want top :\n");
    printf("Add,Subtract,Multiply,Divide?\n");

    do{
    printf("Enter first letter:");
    ch=getchar();
    }
    while(ch!='A'&&ch!='S'&&ch!='M'&&ch!='d');
    printf("\n");

    printf("Enter first number:");
    scanf("%d",&a);
    printf("Enter second number:");
    scanf("%d",&b);


    switch(ch){
    case 'A':
    printf("%d",a+b);
    break;
    case 'S':
    printf("%d",a-b);
    break;
    case 'M':
    printf("%d",a*b);
    break;
    case 'D':
    if(b!=0)
    printf("%d",a/b);
    break;
    }

    return 0;






}
