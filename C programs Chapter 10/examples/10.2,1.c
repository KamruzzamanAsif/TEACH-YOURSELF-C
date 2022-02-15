#include<stdio.h>
#include<string.h>

struct s_type{
    int i;
    char str[80];
}s, *p;

int main(void)
{
    p=&s;
    s.i=10;
    p->i =10;
    strcpy(p->str,"I like structures");
    printf("%d %d %s",s.i,p->i,p->str);
    return 0;
}