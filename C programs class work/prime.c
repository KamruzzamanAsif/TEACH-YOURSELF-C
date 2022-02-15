#include <stdio.h>

int main()
{
    int a,i,r=0;
    printf("Enter a number:");
    scanf("%d",&a);
    i=2;
    while(i<=(a/2)){
        if(a%i==0){
	     r=1;
	    break;
         }
        else i++;
    }
    if(r==0)
    printf("%d is a prime number",a);
    else 
    printf("%d is not a prime number",a);

    return 0;
}

