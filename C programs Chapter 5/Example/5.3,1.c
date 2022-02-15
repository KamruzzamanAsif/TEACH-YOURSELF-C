#include <stdio.h>

int main()
{
    int bball[4][5];
    int i,j;
    
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Quarter %d, player %d, ", i+1,j+1);
            printf("Enter number of points: ");
            scanf("%d",&bball[i][j]);
        }
    }
    
    //display results
    for(i=0;i<4;i++)
    {
        for(j=0;j<5;j++)
        {
            printf("Quarter %d, player %d, ", i+1,j+1);
            printf("%d\n",bball[i][j]);
        }
    }


    return 0;
}
