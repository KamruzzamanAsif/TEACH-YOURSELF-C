#include <stdio.h>

int main()
{
    int a,b,c;
    char x;
    
    for( ; ; ){
        printf("Enter operator & operands:");
        scanf("%d%c%d",&a,&x,&b);
        if(x=='+')
        printf("answer is:%d",a+b);
        else if(x=='-')
        printf("answer is:%d",a-b);
        else if(x=='*')
        printf("answer is:%d",a*b);
        else if(x=='/')
        printf("answer is:%d",a/b);
        else 
        printf("Wrong input"); 
        printf("\nDo you want to continue?\n If so press 1\n");
        scanf("%d",&c);
        if(c!=1)
        break;
    }

    return 0;
}

