#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *from, *to;
    char ch, watch;
    
    /* see if correct number of command line arguments */
    if(argc<3){
        printf("Usage: copy <source> <destination>.\n");
        exit (1);
    }
    
    // open source file
    if((from = fopen(argv[1], "r"))==NULL) {
        printf("Cannot open source file.\n");
        exit(1) ;
    }
    
    // open destination file
    if((to = fopen(argv[2], "r"))==NULL) {
        printf("Cannot open destination file.\n");
        exit(1) ;
    }
    
    if(argc==4 && !strcmp(argv[3],"watch"))
        watch=1;
    else 
        watch=0;
        
    // copy the file
    while((ch=fgetc(from)) != EOF){
        fputc(ch,to);
        if(watch)
            putchar(ch);
    }
    
    
    fclose(from);
    fclose(to);
    
    return 0;
}



