#include <stdio.h>
float convert(float p);

int main()
{
    float dollar,pound;
    printf("Enter the amount in dollar:");
    scanf("%f",&dollar);
    pound=convert(dollar);
    printf("The amount in pound is:%.2f",pound);
    return 0;

}

float convert(float p)
{
    return p/2;
}
