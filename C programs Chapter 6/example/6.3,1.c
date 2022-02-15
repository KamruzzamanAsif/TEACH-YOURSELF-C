#include <stdio.h>
#include <ctype.h>
int main ()
{
    char str[80], *p;
    int i;
    printf("Enter a string:");
    gets(str);
    
    p=str;
    while(*p)
    {
        *p=toupper(*p);
        p++;
    }
    printf("%s\n",str); //upercase
    
    p=str;
    while(*p)
    {
        *p=tolower(*p);
        p++;
    }
    printf("%s\n",str); //lowercase
    
    return 0; 
}

