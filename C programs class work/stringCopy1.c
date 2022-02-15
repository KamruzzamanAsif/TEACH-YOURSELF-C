#include <stdio.h>
#include <string.h>

int main()
{
    
    char a[1000]= "ASIF",b[1000];
    int i;
    
    for(i=0;i<= strlen(a);i++)
    {
        b[i]=a[i];
    }

   
    printf("In b output is : %s",b);

    return 0;
}
