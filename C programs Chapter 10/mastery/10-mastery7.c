#include <stdio.h>

int main(void)
{
    union u_type{
        short int i;
        unsigned char c[2];
    }uvar;

    uvar.i=99;

    printf("High order byte: %u\n", uvar.c[1]);
    printf("Low order byte: %u\n", uvar.c[0]);

    return 0;
}

