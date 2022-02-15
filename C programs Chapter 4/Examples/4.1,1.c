#include <stdio.h>

int main (void)
{
    unsigned u;
    long l;
    short s;
    
    printf ("Enter an unsigned:");
    scanf("%d",&u);
    printf ("Enter a long:");
    scanf("%d",&l);
    printf ("Enter a short:");
    scanf("%d",&s);
    
    printf("%u %ld %hd\n", u,l,s);
    

  return 0;
}