#include <stdio.h>

int main()
{
    int x,y,z,k;
    char j;
    
    for( ; ; )
    {
        printf("Enter two numbers:\n");
        scanf("%d%d",&x,&y);
        getchar();
        printf("press a or s or m or d\n");
        scanf("%c",&j);
        getchar();
        switch(j)
        {
            case 'a':
            z=x+y;
            break;
            case 's':
            z=x-y;
            break;
            case 'm':
            z=x*y;
            break;
            case 'd':
            z=x/y;
            break;
            default:
            printf("Wrong input");
            break;
        }
        printf("\%d",z);
        printf("\n If you want to stop press 0");
        scanf("\n%d",&k);
        if(k==0)
        break;
    
    }
   

    return 0;
}

