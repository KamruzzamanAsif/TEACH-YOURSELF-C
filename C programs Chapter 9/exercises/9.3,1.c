#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    unsigned count;
    
    /* see if file name is specified */
    if(argc!=2){
        printf("File name missing.\n");
        exit (1);
    }
    
    // open  file
    if((fp = fopen(argv[1], "r"))==NULL) {
        printf("Cannot open file.\n");
        exit(1) ;
    }
    
    count = 0;
        
    while(!feof(fp)){
        fgetc(fp);
        if(ferror(fp))
        {
            printf("File error");
            exit(1);
        }
        count++;
    }
    
    
    printf("File has %u bytes", count-1);
    fclose(fp);
    
    return 0;
}



