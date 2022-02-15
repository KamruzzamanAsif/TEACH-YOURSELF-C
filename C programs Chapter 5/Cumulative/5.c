#include<stdio.h>
#include<string.h>

int main ()
{
    char c[50]="concentration", a[50]="-------------", x;
    int i,flag=0;
    
    do
    {
        printf("%s\n",a);
        printf("Enter alphabet:");
        x=getchar();

        for(i=0;i<strlen(c);i++)

            if(x==c[i])
                a[i]=x;
        flag++;
    } while(strcmp(a,c));
    
    printf("%s\n",c);
    printf("It took you %d tries to guess the word",flag);
    
    return 0;
}