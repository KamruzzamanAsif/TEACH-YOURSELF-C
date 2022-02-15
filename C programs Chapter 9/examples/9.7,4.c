#include <stdio.h>

int main(void)
{
    if(rename("myfile.txt","yourfile.txt"))
        printf("Rename failed.\n");
    else
        printf("Rename successful.\n");
    
    return 0;
}