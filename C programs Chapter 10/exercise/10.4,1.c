#include<stdio.h>

int main ()
{
    struct b_type{
    int a:3;
    int b:3;
    int c:2;
    }bvar;

    bvar.a=-1;
    bvar.b=3;
    bvar.c=1;
    
    printf("%d %d %d",bvar.a,bvar.b,bvar.c);
    
    return 0;
}