#include<stdio.h>

int main()
{
    char ch;

    do{
    ch=getchar();
    }

    while(ch!='q');


    printf("Found the q.");

    return 0;
}

