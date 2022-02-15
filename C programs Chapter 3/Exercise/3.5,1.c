#include<stdio.h>
int main()
{
float gallons;

printf("\nEnter gallons: ");
scanf("%f",&gallons);

    do{
        printf("Liters: %f\n",gallon*3.7854);

        printf("Enter gallons or 0 to exit");
        scanf("%f",&gallons);


       }while(gallons!=0);

    return 0;

    }
