#include <stdio.h>

struct s_type {
     int i;
     char ch;
     double d;
     char str[180];
}s;
 
int main ()
{
    printf("Enter an integer:");
    scanf("%d",&s.i);
    printf("\nEnter an character:");
    scanf("%c",&s.ch);
    printf("\nEnter an floating point number:");
    scanf("%f",&s.d);
    printf("\nEnter an string:");
    scanf("%s",&s.str);

    printf("\n%d\n %c\n %f\n %s\n", s.i,s.ch,s.d,s.str);
    return 0;

}