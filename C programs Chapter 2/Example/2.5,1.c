#include <stdio.h>
int main (void)
{

    int answer, count;
    for(count=1; count<11; count++) {
    printf("What is %d + %d?\n" , count, count);
    scanf ("%d", &answer);
    
    if(answer == count+count) printf("Right!\n");
    else {
        printf("Sorry. you're wrong.\n" );
        printf("The answer is %d .\n", count+count);
    }
    }
    return 0;
}