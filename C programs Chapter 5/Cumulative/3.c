#include<stdio.h>
#include<string.h>

int main ()
{
    char str[80];
    gets(str);
    int i,space=0,comma=0,period=0;
    
    for(i=0;i<strlen(str);i++)
    {
        switch (str[i])
        {
            case ' ': space++;
            break;
            case '.': period++;
            break;
            case ',': comma++;
            break;
        }
    }
    printf("Number of commas is %d, number of spaces is %d, number of periods is %d", comma,space,period);
    return 0;
}