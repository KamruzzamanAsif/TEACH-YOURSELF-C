#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[80];

    //see if file name is sepcified
    if(argc!=2)
    {
        printf("File name not specified.\n");
        exit(1);
    }

    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    while(!feof(fp))
    {
        fgets(str,79,fp);
        if(!feof(fp))
            printf("%s",str);
        printf("More?... (Y/N)");
        if(toupper(getchar())=='N') break;
        printf("\n");
    }

    fclose(fp);

    return 0;
}