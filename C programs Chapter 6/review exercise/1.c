#include <stdio.h>

int main ()
{
    int a[10],i,ev=0,od=0;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        if(a[i]%2==0)
        {
            ev=ev+a[i];
        }
        else od=od+a[i];
    }
    printf("sum of odd integers %d and sum of even integers %d",od,ev);
    
    return 0;
}