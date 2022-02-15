#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    long loc;
    FILE *fp;
    
    //check for command line argument
    if(argc != 2)
    {
        printf("File name missing.\n");
        exit(1);
    }
    
    //open file for output
    if((fp==fopen(argv[1],"rb"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    
    printf("Enter a byte to seek to: ");
    scanf("%ld",&loc);
    if(fseek(fp,loc,SEEK_SET)){
        printf("Seek error.\n");
        exit(1);
    }
    
    printf("Value at loc %ld is %d", loc, getc(fp));
    fclose(fp);
    
    return 0;
}
