#include <stdio.h>

double avg(void);

int main()
{
    float average;
    average=avg();
    printf("%f",average);
    return 0;
}

double avg(void)
{
    float num,sum=0;
    int i;
    for(i=0;i<10;i++)
    {
        printf("Enter number: ");
        scanf("%f",&num);
        sum=sum+num;
    }
    return sum/10;
}
