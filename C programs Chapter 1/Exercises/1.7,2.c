#include <stdio.h>

void func1(void);
void func2(void);

int main()
{
    func1();
    func2();
}

void func1(void)
{
    printf("The summer soldier,");
}

void func2(void)
{
    printf("the sunshine patriot.");
}
