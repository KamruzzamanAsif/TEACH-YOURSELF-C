#include <stdio.h>

int main ()
{
    char *p,**mp,str[80];
    p=str;
    mp=&p;
    
    printf("Enter your name");
    gets(*mp);
    printf("hi %s",*mp);
    
    return 0;
}