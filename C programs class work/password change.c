#include <stdio.h>
#include <string.h>

int main()
{
    char p[9]="iit12345",gp[9];
    int x;
    for( ; ; )
    {
    printf("\nEnter password:");
    gets(gp);
    
    if(strcmp(p,gp)==0)
    printf("Key Unlocked");
    else
    {
        printf("Wrong password!\n DO you want to reset password? If so press 1\n");
        scanf("%d",&x); getchar();
        if(x==1)
        gets(p);
        else printf("Wrong input\n");
    }
    
    }
    
    return 0;
}
