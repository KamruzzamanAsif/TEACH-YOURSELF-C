#include<stdio.h>
float main()
{
	float a,b,c,d,e,f,x;

	printf("Enter marks for 6 courses: ");
	scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
	x=(a+b+c+d+d+e+f)/6;
		if(x>=75)
		printf("Star MArks");
		else if(x>=60)
		printf("1st Devision");
		else if(x>=50)
		printf("2nd Devision");
		else if(x>=40)
		printf("3rd Devision");
		else 
		printf("Failed");
}
