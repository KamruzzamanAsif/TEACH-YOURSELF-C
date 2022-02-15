// Copy a file
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;
    char str[128];

    // see if correct line of command line arguments
    if(argc<3)
    {
        printf("Usage: copy <source> <destination>\n");
        exit(1);
    }

    // open source file
    if((from=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open source file.\n");
        exit(1);
    }

    // open destination file
    if((to=fopen(argv[2],"w"))==NULL)
    {
        printf("Cannot open destination file.\n");
        exit(1);
    }

    // copy the file
    while(!feof(from))
    {
        fgets(str,127,from);
        if(ferror(from))
        {
            printf("Error on input.\n");
            break;
        }
        if(!feof(from)) fputs(str,to);
        if(ferror(to))
        {
            printf("Error on output.\n");
            break;
        }
    }

    if(fclose(from)==EOF)
    {
        printf("Error closing source file.\n");
        exit(1);
    }

    if(fclose(to)==EOF)
    {
        printf("Error closing destination file.\n");
        exit(1);
    }

    return 0;
}