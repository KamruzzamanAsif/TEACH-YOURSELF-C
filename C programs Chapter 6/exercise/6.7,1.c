#include <stdio.h>

void mystrcat(char *to,char *from)
{
    while(*to)
        *to++;
    while(*from)
        *to++=*from++;
        
    *to='\0';
}

int main ()
{
    char str[]="this is";
    mystrcat(str,"a test");
    printf(str);
    
    return 0;
}