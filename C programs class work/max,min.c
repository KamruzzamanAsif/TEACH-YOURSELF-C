#include <stdio.h>

int main(){

    int aa[10],i,x=0,f=0;

    for(i=0;i<10;i++)
    {
        scanf("%d",&aa[i]);

    }

    for(i=0;i<10;i++)
    {
        if(x<aa[i])
        {
            x=aa[i];
            f++;

        }

    }
    printf("The max is:%d is at %d",x,f-1);

    for(i=0;i<10;i++)
    {
        if(x>aa[i])
        {
            x=aa[i];
            f++;

        }

    }
    printf("The min is:%d is at %d",x,f-11);

    return 0;
}
