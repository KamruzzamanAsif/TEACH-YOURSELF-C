#include <stdio.h>

int main(void)
{
    int num1,num2;
    printf("Enter first number:");
    scanf ("%d",&num1);
    printf("Enter second number:");
    scanf("%d", &num2);
    
    if(num2 == 0) 
    printf("Cannot divide by zero.");
    else 
    printf("Answer is: %d.", num1 / num2);
    return 0;
}