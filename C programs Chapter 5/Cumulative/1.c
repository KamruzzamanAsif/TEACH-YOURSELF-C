#include<stdio.h>
#include<string.h>

int main ()
{
    char c[80];
    int i;
    
    gets(c);
    
    i=strlen(c);
    printf("%s",c);
    
    for(i;i<80;i++)
    {
        printf(".");
    }
    
    return 0;
}