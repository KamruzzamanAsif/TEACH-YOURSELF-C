#include<stdio.h>
int main()
{
    int i;
    char ch;

    for(i=0;i<10;i++){
     printf("\nEnter a letter:");
     ch=getchar();

     printf("\n");

     for( ;ch;ch--)
     printf("%c",'.');}


    return 0;




}
