#include <stdio.h>

int main()
{
    int a,i,x,y;
    printf("Enter the lines of piramid:");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(x=a-i;x>0;x--)
        {
            printf(" ");
        }
            for(y=2*i-1;y>0;y--)
            {
                printf("*");
            }
        
        printf("\n");
    }
    return 0;
}

