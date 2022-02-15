#include <stdio.h>

void avg(double *d, int num);

int main(void)
{
    double nums[] = {1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0, 10.0};

    avg(nums, 10);

    return 0;
}

void avg(double *d, int num)
{
    double sum;
    int temp;

    temp = num-1;

    for(sum=0; temp>=0; temp--)
    {
        sum = sum + d[temp];
    }

    printf("Average is %f", sum/(double) num);
}