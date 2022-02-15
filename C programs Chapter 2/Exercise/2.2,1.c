#include <stdio.h>
int main()
{
    int a,b,c;
    
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    
    printf("\nTo see the sum of numbers press 1  or To see the product of numbers press 2\n");
    scanf("%d",&c);
    
    if(c==1)
    printf("Sum is: %d",a+b);
    else if(c==2)
    printf("product is %d", a*b);
    else 
    printf("Wrong input");
    
    return 0;
    
}