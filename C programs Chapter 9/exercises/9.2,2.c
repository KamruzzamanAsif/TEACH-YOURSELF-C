#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int count[26];

int main(int argc, char *argv[])
{
    FILE *fp;
    char ch;
    int i;
    
    /* see if filename is specified */
    if(argc!=2){
        
        exit (1);
    }
    
    
    if((fp = fopen(argv[1], "r"))==NULL) {
        printf("Cannot open file.\n");
        exit(1) ;
    }
    
    while((ch=fgetc(fp)) != EOF){
        ch=toupper(ch);
        if(ch>='A' && ch<='Z')
            count[ch-'A']++;
    }
    
    for(i=0;i<26;i++)
        printf("%c occured %d times\n.", i+'A', count[i]);
    
    fclose(fp) ;
    
    return 0;
}



