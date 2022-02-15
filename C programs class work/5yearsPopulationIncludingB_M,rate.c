#include<stdio.h>
float fun1(float p,float q,float r);
float main()
{
	float n1,n2,n3,a,b,c,d,e;

	printf("Enter the population: ");
	scanf("%f",&n1);

	printf("Enter birth rate(per 100): ");
	scanf("%f",&n2);

	printf("Enter mortality rate(per 100): ");
	scanf("%f",&n3);

	  a=fun1(n1,n2,n3);
	  b=fun1(a,n2,n3);
	  c=fun1(b,n2,n3);
	  d=fun1(c,n2,n3);
	  e=fun1(d,n2,n3);
	
	printf("After 1 year the population will be: %f\n\nAfter 2 year the population will be: %f\n\nAfter 3 year the population will be: %f\n	\nAfter 4 year the population will be: %f\n\nAfter 5 year the population will be: %f\n\nGrowth rate is%f",a,b,c,d,e,n2-n3);
	
	return 0;

}


float fun1(float p,float q,float r)
{
	float x;
	x=(100*p+p*q-p*r)/100;
	return x;
}





