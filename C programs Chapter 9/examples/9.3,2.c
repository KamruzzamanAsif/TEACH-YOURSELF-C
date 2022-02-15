/* Compare files. */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
(
    FILE *fp1, *fp2;
    char ch1, ch2, same;
    unsigned long l;
    
    /* see if correct number of command line arguments */
    if(argc!=3) {
        printf("Usage: compare <file 1> <file 2>\n");
        exit (1) ;
    }
    
    /* open first file */
    if((fp1 = fopen(argv[l], "rb"))==NULL} (
        printf("Cannot open first file.\n");
        exit(l);
    }
    
    /* open second file */
    if((fp2 = fopen(argv [2],"rb")==NULL) (
        printf("Cannot open second file.\n");
        exit(l);
    }
    
    l = 0;
    same = 1;
    /* compare the fi1es */
    while(!feof(fpl)){
        ch1 = fgetc(fp1);
        if (ferror ( fp1){
        printf ("Error reading first file.\n");
        exit(1);
        }
        ch2= fgetc(fp2);
        if (ferror ( fp2){
        printf ("Error reading second file.\n");
        exit(1);
        }
        
        if(chl!=ch2){
            printf("Files differ at byte number %lu", l);
            same = 0:
            break;
        }
        l++;
    }
    
        
    if (same) printf("Files are the same.\n");
    if(fclose(fpl)==EOF} (
        printf("Error closing first file.\n"):
        exit(1);
    }
    
    
    if (fclose(fp2)==EOF) {
        printf ("Error closing second file. \n");
        exit(1);
    }
    
    return 0;
}
    
    
    
    
    