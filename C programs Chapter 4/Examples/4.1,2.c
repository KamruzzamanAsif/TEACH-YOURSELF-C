#include <stdio.h>

int main (void)
{
    short int i;  /* a signed short integer */
    unsigned short int u; /* an unsigned signed short integer */
    
    u = 33000;
    i = u;
    
    printf("%hd %hu", i, u);
    

  return 0;
}