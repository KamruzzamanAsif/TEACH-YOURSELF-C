#include<stdio.h>
double ftom(double f);

int main ()
{
    double feet;
    printf("Enter feet:");
    scanf("%lf",&feet);
    printf("Meters: %lf",ftom(feet));
    
    return 0;
}

double ftom(f)
double f;
{
    return f/3.28;
}