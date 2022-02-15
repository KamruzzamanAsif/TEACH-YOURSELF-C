#include <stdio.h>
int main ()
{
    char *cp,ch;
    int *ip,i;
    float *fp,f;
    double *dp, d;
    
    cp=&ch;
    ip=&i;
    fp=&f;
    dp=&d;

    //print the current values
    printf("%p %p %p %p\n",cp,ip,fp,dp);

    cp++;
    ip++;
    fp++;
    dp++;

    //print their new values
    printf("%p %p %p %p",cp,ip,fp,dp);
    return 0;
}