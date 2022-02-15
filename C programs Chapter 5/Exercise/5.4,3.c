 #include <stdio.h>

int main()
{
    int a[10][3];
    int i,j,x;
    
    for(i=0;i<10;i++)
    {
        x=i+1;
        for(j=0;j<3;j++)
        {
            a[i][j]=x;
            x=(i+1)*x;
        }
    }
    
    for(i=0;i<10;i++)
    for(j=0;j<3;j++)
    printf("%5d",a[i][j]);

    return 0;
}
