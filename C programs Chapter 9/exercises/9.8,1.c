// here we will copy using redirection
// execute like this:
// C>NAME <in> out

#include <stdio.h>

int main(void)
{
    char ch;

    while(!feof(stdin))
    {
        scanf("%c",&ch);
        if(!feof(stdin)) printf("%c",ch);
    }

    return 0;
}