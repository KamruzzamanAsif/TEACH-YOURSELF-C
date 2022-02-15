#include<stdio.h>
int main()
{

    char ch;



    do{
    printf("\nEnter A/B/C/D/E caracter,q to quit:");
    ch=getchar();
    printf("\n");




    switch(ch){
    case 'A':
    printf("now is");
    break;
    case 'S':
    printf("the timed");
    break;
    case 'M':
    printf("for all good men");
    break;
    case 'D':
    printf("the summer");
    break;
    case 'E':
    printf("solder");
    break;
    }
    }
    while(ch!='q');


    return 0;






}

