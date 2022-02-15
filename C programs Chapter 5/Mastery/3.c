#include <stdio.h>

int main ()
{
    int i,a[20],j,k,max=0,maxi=0,mode;
    
    for(i=0;i<20;i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i<20; i++)
    {
        k=a[i];
        
        for(j=i+1;j<20;j++)
        {
            if(k==a[j]) max++;
            if(max>maxi){
                maxi=max;
                mode=k;
            }
        }
    }
    printf("The mode is %d",mode);
    
    return 0;

}