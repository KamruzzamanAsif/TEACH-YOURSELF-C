#include<stdio.h>
int main()
{
    int i;

    printf("enter a number between 1 and 4");
    scanf("%d",&i);

    switch(i){
        case 1:
        printf("one");
        break;


        case 2:
        printf("two");
        break;


        case 3:
        printf("three");
        break;


        case 4:
        printf("four");
        break;

       default:
        printf("unrecognize number");
        break;

    }


    return 0;


}
