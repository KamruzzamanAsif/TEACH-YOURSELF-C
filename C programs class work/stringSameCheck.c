#include <stdio.h>
#include <string.h>

int main()
{
    
    char a[1000],b[1000];
    int i,f;
    
    scanf("%s",a);
    scanf("%s",b);
    
    if (strlen(a) == strlen(b))
    {
        for(i=0;i<strlen(a);i++)
        {
            if(a[i] != b[i])
            {
                f=1;
                break;
            }
            
        }
        if(f==1)
        printf("Not same");
        else printf("same");
        
    }
    
    else printf("Not same");
   
   

    return 0;
}
