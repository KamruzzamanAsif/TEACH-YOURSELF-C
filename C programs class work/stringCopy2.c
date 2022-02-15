#include <stdio.h>
#include <string.h>

int main()
{
    
    char a[1000]= "ASIF",b[1000];
    int i;
    
    strcpy(b,a);
   
    printf("In b output is : %s",b);

    return 0;
}
