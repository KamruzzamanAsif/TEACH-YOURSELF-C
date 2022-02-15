#include<stdio.h>
#include<stdlib.h>

union u_type {
    double d;
    unsigned char c[8];
};

double uread(FILE *fp);
void uwrite(double num, FILE *fp);

int main()
{
    FILE *fp;
    double d;

    if((fp=fopen("myfile","wb+"))==NULL)
    {
        printf("Cannot open file\n");
        exit(1);
    }
    uwrite(100.23,fp);
    d=uread(fp);
    printf("%lf",d);
    return 0;
}
void uwrite(double num,FILE *fp)
{
    int i;
    union u_type var;
    var.d=num;
    for(i=0;i<8;i++)
        fputc(var.c[i],fp);
}
double uread(FILE *fp)
{
    int i;
    union u_type var;
    rewind(fp);
    for(i=0;i<8;i++) var.c[i]=fgetc(fp);
    return var.d;


}







