#include<stdio.h>

int main()
{
    char ch;

    ch=getchar();

    while(ch!='q')
    ch=getchar();
    printf("Found the q.");

    return 0;
}
