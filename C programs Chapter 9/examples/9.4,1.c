#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    char str[80];
    
    //check for command line argument
    if(argc != 2)
    {
        printf("Sepcify file name.\n");
        exit(1);
    }
    
    //open file for output
    if((fp==fopen(argv[1],"w"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    
    printf("Enter a blank line to stop.\n");
    do{
        printf(": ");
        gets(str);
        strcat(str,"\n"); //add new line
        if(*str != '\n') fputs(str,fp);
    }while(*str != '\n');
    fclose(fp);
    
    //open file for input
    if((fp==fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    
    //read back the file
    do{
        fgets(str,79,fp);
        if(!feof(fp)) printf(str);
    }while(!feof(fp));
    fclose(fp);
    
    return 0;
}
