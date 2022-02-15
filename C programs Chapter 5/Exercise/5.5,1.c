#include <stdio.h>

int main ()
{
    char num[10][20]={"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    
    int i;
    
    do{
        printf("Enter number of (1-9)");
        scanf("%d",&i);
        i--;
        if(i>=0 && i<10)
            printf("%s\n",num[i]);
    } while(i>=0);
    
    return 0;

}