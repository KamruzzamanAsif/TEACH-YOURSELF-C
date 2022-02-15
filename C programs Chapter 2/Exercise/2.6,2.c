#include <stdio.h>
int main (void)
{
    int a,i;
    printf ("Enter an integer:") ;
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        printf("%d",a-i);
        printf("\n");
        if((a-i) == 0) printf("\a");
    }
    
    return 0;
}    