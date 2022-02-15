#include <Stdio.h>

int main ()
{
    float f,*p;
    p=&f;
    *p=1.22;
    printf("%f",f);
    
    return 0;
}