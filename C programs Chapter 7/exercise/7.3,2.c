#include<stdio.h>

void prompt(char *msg,char *num);

int main ()
{
    char i[80];
    prompt("Enter a number ",i);
    printf("Your number is %s",i);
}

void prompt(char *msg,char *num)
{
    printf(msg);
    scanf("%s", num);
}
