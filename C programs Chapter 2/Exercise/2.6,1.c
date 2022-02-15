#include <stdio.h>
int main (void)
{
    int i;
    printf ("number\t\tit's square\tit's cube\n") ;
    for(i=1;i<=10;i++)
    {
        printf("%d\t\t%d\t\t%d",i,i*i,i*i*i);
        printf("\n");
    }
    
    return 0;
}    