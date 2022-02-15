#include<stdio.h>

int main()
{
    char ch;

    printf("Enter your massage.\n");

    ch=getchar();
    while(ch!='\r'){
    printf("%c",ch+1);
    ch=getchar();
    }

    return 0;

}
