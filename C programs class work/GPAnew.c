#include <stdio.h>
int func1();
float func2(int aa);
int func3(float bb);

int main()
{
    int i,st;
    printf("Enter the number of students:");
    scanf("%d",&st);

    for(i=1;i<=st;i++)
    {
        int a1,b1,c1,d1,e1,f1,x;
        float a2,b2,c2,d2,e2,f2,g;
        int a3,b3,c3,d3,e3,f3;

        printf("\nEnter the numbers for CSE-101:\n");
        a1=func1();
        printf("\nTotal number in CSE-101 is %d out of 100",a1);
        a2=func2(a1);
        printf("\nGPA is:%.2f",a2);
        a3=func3(a2);


        printf("\nEnter the numbers for CSE-102:\n");
        b1=func1();
        printf("\nTotal number in CSE-102 is %d out of 100",b1);
        b2=func2(b1);
        printf("\nGPA is:%.2f",b2);
        b3=func3(b2);


        printf("\nEnter the numbers for SE-106:\n");
        c1=func1();
        printf("\nTotal number in SE-106 is %d out of 100",c1);
        c2=func2(c1);
        printf("\nGPA is:%.2f",c2);
        c3=func3(c2);


        printf("\nEnter the numbers for MATH-104:\n");
        d1=func1();
        printf("\nTotal number in MATH-104 is %d out of 100",d1);
        d2=func2(d1);
        printf("\nGPA is:%.2f",d2);
        d3=func3(d2);


        printf("\nEnter the numbers for GE-105:\n");
        e1=func1();
        printf("\nTotal number in GE-105 is %d out of 100",e1);
        e2=func2(e1);
        printf("\nGPA is:%.2f",e2);
        e3=func3(e2);


        printf("\nEnter the numbers for STAT-103:\n");
        f1=func1();
        printf("\nTotal number in STAT-103 is %d out of 100",f1);
        f2=func2(f1);
        printf("\nGPA is:%.2f",f2);
        f3=func3(f2);


        if (a1<40||b1<40||c1<40||d1<40||e1<40||f1<40)
        {
            printf("\nGPA won't be calculated because you failed");
        }
        else
        {
            g=(a2+b2+c2+d2+e2+f2)/6;
            printf("\nTotal GPA is:%.2f",g);
        }
        printf("\nPress 0 to stop or Press 1 to continue:");
        scanf("%d",&x);
        if (x==0)
        {
            break;
        }



    }
    return 0;
}

int func1()
{
    int a,b,c;
    printf("Continuous evolution: ");
    scanf("%d",&a);
    printf("lab:");
    scanf("%d",&b);
    printf("final:");
    scanf("%d",&c);
    if(a>33||b>33||c>33)
    {
     printf("Wrong input,Enter the marks again\n");
     func1();
     }
    return a+b+c;
}

float func2(int aa)
{
    if(aa>=80 && aa<=100)
    {
        return 4.00;
    }
    else if(aa<80 && aa>=75)
    {
        return 3.75;
    }
    else if(aa<75 && aa>=70)
    {
        return 3.50;
    }
    else if(aa<70 && aa>=65)
    {
        return 3.25;
    }
    else if(aa<65 && aa>=60)
    {
        return 3.00;
    }
    else if(aa<60 && aa>=55)
    {
        return 2.75;
    }
    else if(aa<55 && aa>=50)
    {
        return 2.50;
    }
    else if(aa<50 && aa>=45)
    {
        return 2.25;
    }
    else if(aa<45 && aa>=40)
    {
        return 2.00;
    }
    else
    {
        return 0.00;
    }
}
int func3(float bb)
{
    if(bb==4.00)
    {
        printf("\nGrade is:A+");
        return 0;
    }
    else if(bb>=3.75 && bb<4.00)
    {
       printf("\nGrade is:A");
        return 0;
    }
    else if(bb>=3.50 && bb<3.75)
    {
        printf("\nGrade is:A-");
         return 0;
    }
    else if(bb>=3.25 && bb<3.50)
    {
        printf("\nGrade is:B+");
         return 0;
    }
    else if(bb>=3.00 && bb<3.25)
    {
       printf("\nGrade is:B");
        return 0;
    }
    else if(bb>=2.75 && bb<3.00)
    {
      printf("\nGrade is:B-");
       return 0;
    }
     else if(bb>=2.50 && bb<2.75)
    {
      printf("\nGrade is:C+");
       return 0;
    }
     else if(bb>=2.25 && bb<2.50)
    {
      printf("\nGrade is:C");
       return 0;
    }
     else if(bb>=2.00 && bb<2.25)
    {
      printf("\nGrade is:D");
       return 0;
    }
    else
    {
       printf("\nGrade is:F");
        return 0;
    }

}
