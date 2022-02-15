#include <stdio.h>
#include <string.h>

struct s_type{
    char str[80];
}var;

void f(struct s_type i);

int main(void)
{
    strcpy(var.str, "this is original string");
    f(var);
    printf("%s\n",var.str);

    return 0;
}

void f(struct s_type i)
{
    strcpy(i.str, "new string");
    printf("%s\n",i.str);
}