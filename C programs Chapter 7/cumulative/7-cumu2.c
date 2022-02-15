#include <stdio.h>
#include <ctype.h>

void string_up(char *p);

int main(void)
{
    char str[] = "this is a test";

    string_up(str);
    printf(str);

    return 0;
}

void string_up(char *p)
{
    while(*p)
    {
        *p = toupper(*p);
        p++;
    }
}