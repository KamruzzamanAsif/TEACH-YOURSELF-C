#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    unsigned char ch, val;

    if(argc<3)
    {
        printf("Usage: find <filename> <value>.\n");
        exit(1);
    }

    if((fp=fopen(argv[1],"rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    val = atoi(argv[2]);

    while(!feof(fp))
    {
        ch=fgetc(fp);
        if(ch==val)
            printf("Found value at %ld\n.", ftell(fp));
    }
    fclose(fp);

    return 0;

}