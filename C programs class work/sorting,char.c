#include <stdio.h>

int main()
{
    int i,j,x;
    char a[500],k;
    printf("Enter the number of data to be sorted:");
    scanf("%d",&x);
    getchar();
    
    for(i=0;i<x;i++)
    {
        scanf("%c",&a[i]);
        getchar();
    }
    
    for(j=x;j>0;j--)
    {
        for(i=0;i<(j-1);i++)
        {
            if(a[i]>a[i+1])
            {
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
            }
        }
    }
    
    for(i=0;i<x;i++)
    {
        printf("%c\n",a[i]);
    }


    return 0;
}