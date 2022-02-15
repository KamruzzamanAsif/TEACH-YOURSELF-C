#include<stdio.h>
float func();
float main()
{
	float x;
	x=func();
	printf("After 5 years the population will be: %f",x);
	return 0;


}


float func()
{
	float a,b,c;
	int i;
	a=500000;
	for(i=1;i<=5;i=i+1)
		{
		a=(a*2.3)/100;	
		
		

		}
	
	return a;


}
