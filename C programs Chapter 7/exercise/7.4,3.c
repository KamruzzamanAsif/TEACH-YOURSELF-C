#include <stdio.h>
#include<string.h>
#include<stdlib.h>

int main (int argc, char *argv[])
{
    if(argc!=4)
    {
        printf("You must specify the operation");
        printf("Followed by two numbers");
        exit(1);
    }
    if(!strcmp("add",argv[1]))
    printf("%f",atof(argv[2])+atof(argv[3]));
    else if(!strcmp("subtract",argv[1]))
    printf("%f",atof(argv[2])-atof(argv[3]));
    if(!strcmp("multiply",argv[1]))
    printf("%f",atof(argv[2])*atof(argv[3]));
    if(!strcmp("divide",argv[1]))
    printf("%f",atof(argv[2])/atof(argv[3]));
    return 0;
}
