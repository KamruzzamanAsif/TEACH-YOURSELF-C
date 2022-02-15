#include <stdio.h>

int main()
{
   int a=1,i=1,n,x;
   printf("Enter the value of n:");
   scanf("%d",&n);
   printf("%d",a);
   while(i<=n-1){
       a=a+2;
       x=a*a;
       printf(",%d",x);
       i++;
   }

    return 0;
}

