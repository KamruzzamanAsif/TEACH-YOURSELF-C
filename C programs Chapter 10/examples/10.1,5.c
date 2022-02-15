#include<stdio.h>

int main ()
{
    struct s_type{
    int i,j;
    }s;
    int i;
    i=10;
    s.i=100;
    s.j=101;
    printf("%d %d %d",i,s.i,s.j);
    return 0;
}