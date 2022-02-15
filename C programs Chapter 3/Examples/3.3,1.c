#include<stdio.h>
#include<conio.h>
int main()
{
    int i;
    char ch;

    ch='a';

    for(i=0;ch!='q';i++){
    printf("pass: %d\n",i);
    ch=getchar();
    }


    return 0;


}
