#include <Stdio.h>

void mystrcpy(char *to, char *from)
{
    while(*from) *to++=*from++;
    *to='\0';
}

int main ()
{
    char str[]="this is";
    mystrcpy(str,"a test");
    printf(str);
    return 0;
}