#include<stdio.h>
float gpa(float i);
float mrk();
float main()
{
	float a1,a2,b1,b2,c1,c2,d1,d2,e1,e2,f1,f2;
	printf("\n\n\nEnter mark for CSE 101: ");
	a1=mrk();
	a2=gpa(a1);
	printf("Total mark in CSE 101:  %f\n\nGPA in CSE 101: %f\n.....................",a1,a2);

	printf("\n\n\nEnter mark for CSE 102: ");
	b1=mrk();
	b2=gpa(b1);
	printf("Total mark in CSE 102: %f\n\nGPA in CSE 102: %f\n.....................",b1,b2);

	printf("\n\n\nEnter mark for STAT 103: ");
	c1=mrk();
	c2=gpa(c1);
	printf("Total mark in STAT 103: %f\n\nGPA in STAT 103: %f\n.....................",c1,c2);

	printf("\n\n\nEnter mark for MATH 104: ");
	d1=mrk();
	d2=gpa(d1);
	printf("Total mark in MATH 104: %f\n\nGPA in MATH 104: %f\n.....................",d1,d2);

	printf("\n\n\nEnter mark for GE 105: ");
	e1=mrk();
	e2=gpa(e1);
	printf("Total mark in GE 105: %f\n\nGPA in GE 105:%f\n.....................",e1,e2);

	printf("\n\n\nEnter mark for SEL 106: ");
	f1=mrk();
	f2=gpa(f1);
	printf("Total mark in SEL 106: %f\n\nGPA in SEL 106: %f\n.....................",f1,f2);




}

float mrk()
{
	float p,q,r;
	printf("\n\nIn Continious Evolution(Out of 33): ");
	scanf("%f",&p);
	printf("In Lab(Out of 33): ");
	scanf("%f",&q);
	printf("In Final(Out of 34): ");
	scanf("%f",&r);
	return (p+q+r);
}

float gpa(float i)
{
	float j;
	if((i<=100)&&(i>=80))
	j=4.00;
	else if((i<=79)&&(i>=75))
	j=3.75;
	else if((i<=74)&&(i>=70))
	j=3.50;
	else if((i<=69)&&(i>=65))
	j=3.25;
	else if((i<=64)&&(i>=60))
	j=3.00;
	else if((i<=59)&&(i>=55))
	j=2.75;
	else if((i<=54)&&(i>=50))
	j=2.50;
	else if((i<=49)&&(i>=45))
	j=2.00;
	else if((i<=44)&&(i>=40))
	j=2.00;
	else if((i<=39)&&(i>=00))
	j=00;
	return j;
}
