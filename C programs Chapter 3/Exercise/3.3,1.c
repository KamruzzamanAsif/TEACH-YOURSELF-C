#include<stdio.h>
int main()
{
    float dist,speed;
    int num;

    printf("Enter number of drive time computation");
    scanf("%d",&num);

    for( ;num;num--){
    printf("\nEnter distence:");
    scanf("%f",&dist);

    printf("Enter average speed");
    scanf("%f",&speed);

    printf("Drive time is=%f\n",dist/speed);


    }
    return 0;


}
