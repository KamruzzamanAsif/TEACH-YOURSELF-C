#include<stdio.h>

struct s_type{
    int i;
    double d;
};

void f(struct s_type temp);

int main ()
{
    struct s_type var1;
    var1.i=99;
    var1.d=98.6;
    f(var1);
    return 0;
}
void f(struct s_type temp)
{
    printf("%d %f", temp.i,temp.d);
}