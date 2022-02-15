#include <stdio.h>
int main(void)
{
    int choice,a,b;
    printf("1:Addition  2:Subtruction\n");
    scanf ("%d",&choice);
    printf("\nEnter two number:\n");
    scanf ("%d%d",&a,&b);
    if (choice == 1) 
    printf("Addition is %d",a+b) ;
    else 
    printf("Subtruction is %d", a-b);
    
    return 0;
}



