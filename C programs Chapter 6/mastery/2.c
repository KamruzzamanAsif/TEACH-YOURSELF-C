#include <Stdio.h>

int main()
{
    int i,*p;
    p=&i;
    *p=6;
    printf("%d",i);
    
    return 0;
}