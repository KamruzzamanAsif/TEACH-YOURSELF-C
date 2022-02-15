#include <stdio.h>

int main()
{
    int i=0;
    char a[1000]= "ASIF";
    
    while(a[i] != '\0')
    {
        i++;
    }
    printf("String length is %d",i);

    return 0;
}
