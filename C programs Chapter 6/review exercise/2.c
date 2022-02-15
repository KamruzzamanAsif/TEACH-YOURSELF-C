#include <stdio.h>

int main ()
{
    char pass[10]="Tristan", tr[10];
    int i;
    printf("Enter password: ");
    for(i=1;i<=3;i++)
    {
        scanf("%s",&tr);
        if( pass[0]==tr[0] && pass[1]==tr[1] && pass[2]==tr[2] && pass[3]==tr[3] && pass[4]==tr[4] && pass[5]==tr[5] && pass[6]==tr[6])
        {
            printf("Log-on successful");
            return 0;
        }
        else printf("try again\n");
    }
    printf("Access denied");
    return 0;
}