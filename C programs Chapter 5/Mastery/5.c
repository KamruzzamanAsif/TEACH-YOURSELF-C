#include <stdio.h>
#include <string.h>

int main ()
{
    char s[80];
    do
    {
        gets(s);
    } while(strcmp("quit",s));
    
    return 0;
}