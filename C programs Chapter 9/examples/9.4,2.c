#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    FILE *fp;
    double ld;
    int d;
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
    
    fprintf(fp,"%f %d %s", 12345.342, 1908, "hello");
    fclose(fp);
    
    
    
    //open file for input
    if((fp==fopen(argv[1],"r"))==NULL)
    {
        printf("Cannot open file.\n");
        exit(1);
    }
    
    fscanf(fp," %lf%d%s",&ld,&d,str);
    printf("%f %d %s",ld,d,str);
    fclose(fp);
    
    return 0;
}
