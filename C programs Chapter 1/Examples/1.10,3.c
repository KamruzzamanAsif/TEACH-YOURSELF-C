#include <stdio.h>

int o_to_c(int x);

int main()
{
    int a,b;
    printf("Enter the value of ounce:");
    scanf("%d",&a);
    b=o_to_c(a);
    printf("The conversion in cups:%d",b);
}

int o_to_c(int x)
{
    return 8*x;
}
