#include <stdio.h>

int main()
{
    int a[500]={12,6,5,9,10},i,count=0;
    
    for (i=0;i<500;i++)
    {
       if(a[i] != 0)
       count ++;
    }
    printf("%d",count);

    return 0;
}
