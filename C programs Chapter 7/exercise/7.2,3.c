#include <stdio.h>

void print(char *c);

int main ()
{
    char st[]="this is a test";
    print(st);
}

void print(char *c)
{
    if(*c)
    {
        printf("%c",*c);
        print(c+1);
    }
}