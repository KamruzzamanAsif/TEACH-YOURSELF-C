#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch, str[80];
    int count;

    // see if correct line of command line arguments
    if(argc!=2)
    {
        printf("Usage: display <file>\n");
        exit(1);
    }

    // open the file
    if((fp=fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }

    count = 0;
    while(!feof(fp))
    {
        fgets(str,79,fp);
        printf("%s", str);
        count++;

        if(count==23)
        {
            printf("More? (y/n) ");
            gets(str);
            if(toupper(*str)=='N') break;
            count = 0;
        }
    }

    fclose(fp);

    return 0;
}