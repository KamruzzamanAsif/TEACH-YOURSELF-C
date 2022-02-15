#include<stdio.h>

float func1();
float main()
{
	float z;
	z=func1();
	printf("THE GOBIEK IS:%f ",z);

}


float func1()
{
	float a,b;
	printf("Enter two float number: ");
	scanf("%f%f",&a,&b);
	return ((a+b)/2)-1;
}
