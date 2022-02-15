#include<stdio.h>
#include<string.h>

int main ()
{
    char namebook[][2][20]={  "Amy", "0191817161", "Paul", "01971615", "Farin", "01534694346"};
    char name[20];
    int i;
    gets(name);
    for(i=0;i<4;i++)
    {
        if(!strcmp(name,  namebook[i][0]))
        {
            printf("%s", namebook[i][1]);
            return 0;
        }
    }
    printf("Name not found");
    return 0;
}