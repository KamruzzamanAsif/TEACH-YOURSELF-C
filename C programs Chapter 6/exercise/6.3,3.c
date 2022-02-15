#include <stdio.h>
#include <string.h>

int main ()
{
    char str[80], *p;
    int i;
    
    printf("Enter a string:");
    gets(str);
    
    p=str;
    while(*p && *p!=' ') p++;

        printf(p);

    return 0;
}