/* Search speGified file for specified character. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{

    FILE *fp;
    char ch;
    
    /* see if correct number of command line arguments */
    if(argc!=3) {
        printf ("Usage: find <file name> <ch>\n");
        exit (1) ;
    }
    
    
    /*open file for input */
    if( (fp = fopen(argv[1], "r") )==NULL){
        printf("Cannot open file.\n");
        exit(1) ;
    }
    
    /* look for character */
    while( (ch = fgetc(fp)) != EOF)
    if (ch==*argv[2]) {
        printf("%c found", ch);
        break;
    }
    
    fclose (fp) ;
    
    return 0;
}