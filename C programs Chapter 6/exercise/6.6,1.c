#include <stdio.h>

int main ()
{
    int x, *p,**mp;
    p=&x;
    mp=&p;
    
    **mp=55;
    
    printf("%p %p %p",&x,p,mp);
    
    return 0;
}