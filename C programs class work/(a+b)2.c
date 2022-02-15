#include<stdio.h>
float fun2(float x,float y);
float fun3(float x,float y);


float main()

{
	float a,b,p,q,r,s;
	printf("\n\nEnter two numbers: ");
	scanf("%f%f",&a,&b);
	p=fun2(a,b);
	q=fun3(a,b);
	printf("\n\nUsing [(a+b)2=a2+2ab+b2] the value is: %f \n\nUsing [(a+b)3=a3+3a2b+3ab2+b3] the value is: %f",p,q);

}



	float fun2(float x,float y)
	{
	 	return (x*x)+(y*y)+(2*x*y);
	}



		float fun3(float x,float y)
		{
		 	return (x*x*x)+(y*y*y)+(3*x*y*x)+(3*x*y*y);
		}
