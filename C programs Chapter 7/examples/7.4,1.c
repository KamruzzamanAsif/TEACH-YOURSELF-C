#include<stdio.h>
#include<stdlib.h>

int main (int argc,char *argv[])
{
    int i;
    double d;
    long l;
    i=atoi(argv[1]);
    l=atol(argv[2]);
    d=atof(argv[3]);

    printf("%d %ld %f",i,l,d);
    return 0;

}