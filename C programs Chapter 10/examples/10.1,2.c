#include <stdio.h>

struct s_type {
    int i;
    char ch;
    int *p;
    double d;
}s;
    
int main ()
{
    printf("s_type is %d bytes long", sizeof(struct s_type));
    return 0;
}