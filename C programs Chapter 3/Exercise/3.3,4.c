#include<stdio.h>
int main()
{
    int num;
    float dist,speed;

    printf("Enter number of drive time computation");
    scanf("%d",&num);

    while(num){
        printf("\nEnter distance");
        scanf("%f",&dist);

        printf("Enter average speed");
        scanf("%f",&speed);

        printf("drive time is=%f\n",dist/speed);

        num--;



    }

    return 0;



}
