#include <stdio.h>
#include <string.h>

int main()
{
    char l[2000],s[500];
    int i,j,x=0,count=0,a[200],k=0,m=1,p,q;
    gets(l);
    gets(s);
    p=strlen(l);
    q=strlen(s);

    for(i=0;i<p;i++)
    {
        for(j=0;j<q,(i+j)<p;j++)
        {
            if(l[i+j]==s[j])
            {
                x++;
            }

            if(x==q)
            {
                count++;
                a[k]=(i+1);
                a[k+1]=(i+q);
                k=k+2;
                i=(i+q-1);
                break;
            }
        }
        x=0;
    }

    printf("a. No of occurrences:%d",count);
    printf("\nb. Positions:");
    for(k=0;k<(count*2);k=k+2,m++)
    {
        printf("\n\t%d. Starts:%d Ends:%d",m,a[k],a[k+1]);
    }

    return 0;
}
