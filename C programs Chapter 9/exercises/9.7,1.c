#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(void)
{
    char fname[80];

    printf("Enter name of file to erase: ");
    gets(fname);
    printf("Are you sure? (Y/N) ");
    if(toupper(getchar())=='Y');
        if(remove(fname))
            printf("\nFile not found or write protected.\n");
    return 0;
}