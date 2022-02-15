#include <stdio.h>

int main()
{
    int a[500]={1,5,9,12,16,20},i,x,z,j;
    printf("Enter a value to assign in a sorted array:");
    scanf("%d",&x);
    
    for (i=0;i<500;i++)
    {
       if(a[i]> x )
       {
           z=i;
           break;
       }
       else 
       z=6;
    }
    
    
    if(z != 6)
    {
    for(j=500;j>z-1;j--)
    {
        a[j+1]=a[j];
    }
    }
    
    a[z]=x;
    
    
    for(i=0;i<7;i++)
    printf("%d ",a[i]);
        
    

    return 0;
}
