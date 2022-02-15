#include <stdio.h>

int main(void)
{
    int a[100000],n,i,j,k,num,count1=0,count2=0,first,last,middle;

    printf("Total numbers from 1 to :");
    scanf(" %d", &n);

    for(i=0;i<n;i++)
    {
        a[i]=(rand()%(n-1+1)+1);
    }

    num=(rand()%(n-1+1)+1);

    for(i=0;i<n;i++)
    {
        count1++;
        if(a[i]==num)
        {
            break;
        }
    }
    printf("For linear search steps:%d",count1);

    for(j=n;j>0;j--)
    {
        for(i=0;i<(j-1);i++)
        {
            if(a[i]>a[i+1])
            {
                k=a[i];
                a[i]=a[i+1];
                a[i+1]=k;
                count2++;
            }
        }
    }

    first = 0;
    last = n - 1;
    middle = (first+last)/2;

    while (first <= last)
    {
        if (a[middle] < num)
        {
            first = middle + 1;
            count2++;
        }
        if (a[middle] == num)
        {
            break;
        }
        else
        {
            last = middle - 1;
            middle = (first + last)/2;
            count2=count2+2;
        }
    }

    printf("\nFor binary search steps:%d",count2);

  return 0;
}
