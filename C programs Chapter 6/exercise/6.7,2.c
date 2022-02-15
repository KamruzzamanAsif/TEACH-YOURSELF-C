#include <stdio.h>

void f(int *p)
{
    *p=-1;
}

int main ()
{
    int i;
    f(&i);
    printf("%d",i);
    
    return 0;
}