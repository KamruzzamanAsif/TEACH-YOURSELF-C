#include<stdio.h>

int main()
{
    int n1,n2;
    char ch;

    do{
        printf("love,Save,Edit,Quit?\n");

    do{
    printf("Enter your selection:");
    ch=getchar();

    }
    while(ch!='L' && ch!='s '&& ch!='E' && ch!='Q');

    if(ch!='Q')
    {
    printf("%d+%d=%d",n1,n2,n1+n2);
    }
    if(ch!='Q')
    {
    printf("%d-%d=%d",n1,n2,n1-n2);
    }

    }
    while(ch!='Q');



}
