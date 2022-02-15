//Mone rakhar jonno line by line abar porbo


#include <stdio.h>
float myadd(float x, float y);
float mymulti(float x, float y);
float mydiv(float x, float y);
float mysub(float x, float y);
float gobiek(float x, float y);
float squaresum(float x,float y);

int main()
{
    float a,b,c,d,e,f,g,h;

    printf("Enter two numbers:");
    scanf("%f %f", &a, &b);

    c=myadd(a,b);
    d=mymulti(a,b);
    e=mydiv(a,b);
    f=mysub(a,b);
    g=gobiek(a,b);
    h=squaresum(a,b);

    printf("\nthe sum is %f ", c);
    printf("\nthe multi is %f ", d);
    printf("\nThe div is %f ", e);
    printf("\nThe sub is %f ", f);
    printf("\nGobiek is %f", g);
    printf("\nSum of square is %f ", h);
    return 0;
}


float myadd(float x, float y)
{
    float result;

    result=x+y;

    return result;

}


float mymulti(float x, float y)
{
    float result;

    result=x*y;

    return result;
}


float mydiv(float x, float y)
{
    float result;

    result=x/y;

    return result;
}


float mysub(float x, float y)
{
    float result;

    result=x-y;

    return result;
}

float gobiek(float x, float y)
{
   float a,b,c;

   a=myadd(x,y);

   b=mydiv(a,2);

   c=mysub(b,1);

   return c;

}
float squaresum(float x, float y)
{
    float a,b;

    a=myadd(x,y);

    b=mymulti(a,a);

    return b;
}
